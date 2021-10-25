#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (auto &coin: coins) cin >> coin;

    sort(coins.begin(), coins.end(), greater<int>());

    int ans = 0;
    for (auto coin: coins) {
        ans += k / coin;
        k = k % coin;
    }
    cout << ans << '\n';
}
