#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int T;
    cin >> T;
    while (T--) {
        int cnt = 0;
        long long speed = 1;
        long long x, y;
        cin >> x >> y;
        long long dist = y - x;
        while (dist - 2 * speed >= 0) {
            dist -= 2 * speed;
            speed += 1;
            cnt += 2;
        }
        if (dist > speed) {
            cnt += 2;
        } else if (dist == 0) {
            cnt += 0;
        } else {
            cnt += 1;
        }
        cout << cnt << '\n';
    }
}
