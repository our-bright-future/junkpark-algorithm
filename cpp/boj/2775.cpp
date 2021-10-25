#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int apartment[15][15];

    for (int i = 1; i < 15; i++) {
        apartment[0][i] = i;
        apartment[i][0] = 0;
    }

    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            apartment[i][j] = apartment[i][j - 1] + apartment[i - 1][j];
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> k >> n;
        cout << apartment[k][n] << '\n';
    }
}