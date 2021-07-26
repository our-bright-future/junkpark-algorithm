#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n;
vector<int> v;

int main() {
    fast_cin;

    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int dp[n+1];
    fill_n(dp, n+1, 1);
    int ans = 1;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (v[j] < v[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << ans << endl;
}