#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    long long int dp[91];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;
}