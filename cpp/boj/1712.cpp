#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    long long a, b, c;
    cin >> a >> b >> c;

    if (c - b <= 0) {
        cout << -1 << '\n';
    } else {
        cout << a / (c - b) + 1 << '\n';
    }
}