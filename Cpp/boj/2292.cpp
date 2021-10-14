#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << '\n';
    } else {
        int a = 2;
        int b = 7;
        int cnt = 2;
        while (!(a <= n && n <= b)) {
            a = b;
            b += cnt * 6;
            cnt += 1;
        }
        cout << cnt << '\n';
    }
}