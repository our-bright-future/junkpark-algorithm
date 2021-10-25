#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int kg;
    cin >> kg;
    int ans = 1e9;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1667; j++) {
            if (5 * i + 3 * j == kg) {
                ans = min(i + j, ans);
            }
        }
    }
    if (ans == 1e9) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
}