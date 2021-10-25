#include <iostream>
#include<vector>

using namespace std;

int main() {

    cin.tie(0);
    cin.sync_with_stdio(0);

    long long dp[101];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    for (int i = 6; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cout << dp[N] << '\n';
    }
}
