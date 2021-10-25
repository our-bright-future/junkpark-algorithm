#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int t, n;

int main() {
    fast_cin;

    cin >> t;
    int dp[11];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < 11; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    while (t--){
        cin >> n;
        cout << dp[n] << endl;
    }

}