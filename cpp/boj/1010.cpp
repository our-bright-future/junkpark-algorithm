#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"

void solve() {
    long long int comb[31][31];
    for (int i = 0; i < 31; i++) {
        for (int j = 0; j < 31; j++) {
            if (j == i || j == 0)
                comb[i][j] = 1;
            else if (j > i)
                comb[i][j] = 0;
            else
                comb[i][j] = comb[i - 1][j] + comb[i - 1][j - 1];
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << comb[k][n] << endl;
    }
}

int main() {
    fastio();
    solve();
}
