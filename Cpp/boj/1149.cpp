#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n;
int dp[1001][3];
int r[1001];
int g[1001];
int b[1001];

int main() {
    fast_cin;

    cin >> n;

    for (int i = 1; i <= n; i++){
        int cost_r, cost_g, cost_b;
        cin >> cost_r >> cost_g >> cost_b;
        r[i] = cost_r;
        g[i] = cost_g;
        b[i] = cost_b;
    }

    dp[1][0] = r[1];
    dp[1][1] = g[1];
    dp[1][2] = b[1];

    for (int i = 2; i <= n; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + r[i];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + g[i];
        dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + b[i];
    }

    int ans = min(dp[n][0], dp[n][1]);
    ans = min(ans, dp[n][2]);
    cout << ans << endl;

    return 0;
}