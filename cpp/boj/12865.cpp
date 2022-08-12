#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"

void solve() {
    int n, k;
    int w[101], v[101];
    vector<vector<int>> dp(101, vector<int>(100001, 0));
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (j - w[i] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][k] << endl;
}

int main() {
    fastio();
    solve();
}
