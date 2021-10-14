#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> dp(101, vector<string>(101, "1"));

string bigNumAdd(string n1, string n2) {
    int sum = 0;
    string result = "";

    while (!n1.empty() || !n2.empty() || sum) {
        if (!n1.empty()) {
            sum += n1.back() - '0';
            n1.pop_back();
        }
        if (!n2.empty()) {
            sum += n2.back() - '0';
            n2.pop_back();
        }
        result.push_back((sum % 10) + '0');
        sum /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 2; i < 101; i++) {
        for (int j = 1; j < i; j++) {
            dp[i][j] = bigNumAdd(dp[i - 1][j - 1], dp[i - 1][j]);
        }
    }

    cout << dp[n][m] << endl;

}
