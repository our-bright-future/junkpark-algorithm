//#include "bits/stdc++.h"
#include <iostream>
#include <vector>


using namespace std;

int dp[1001][1001];

int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= 1000; j++) {
            dp[i][j] = 1;
        }
    }

    for (int i = 2; i <= 1000; i++){
        for (int j = 1; j < i; j++){
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % 10007;
        }
    }
    cout << dp[n][k] << endl;
}
