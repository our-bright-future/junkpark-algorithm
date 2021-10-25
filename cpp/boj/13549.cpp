#include <bits/stdc++.h>

using namespace std;

vector<int> dp(100001, 1e9);

int main() {
    int n, k;
    cin >> n >> k;
    queue<int> Q;
    Q.push(n);
    dp[n] = 0;
    while (!Q.empty()) {
        int now = Q.front();
        Q.pop();
        if (now * 2 <= 100000 && dp[now * 2] == 1e9) {
            dp[now * 2] = dp[now];
            Q.push(now * 2);
        }
        if (now - 1 >= 0 && dp[now - 1] == 1e9) {
            dp[now - 1] = dp[now] + 1;
            Q.push(now - 1);
        }
        if (now + 1 <= 100000 && dp[now + 1] == 1e9) {
            dp[now + 1] = dp[now] + 1;
            Q.push(now + 1);
        }

    }
    cout << dp[k] << endl;
}
