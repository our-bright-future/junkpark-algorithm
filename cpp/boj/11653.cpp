#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int x = 2;
    while (n != 1) {
        while (n % x == 0) {
            n /= x;
            cout << x << '\n';
        }
        x += 1;

    }
}