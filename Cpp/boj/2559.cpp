#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> temperatures(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        temperatures[i] = x + temperatures[i - 1];
    }
    int ans = -1e9;
    for (int i = 1; i <= n - k + 1; i++) {
        ans = max(ans, temperatures[i + k - 1] - temperatures[i - 1]);
    }
    cout << ans << endl;
}