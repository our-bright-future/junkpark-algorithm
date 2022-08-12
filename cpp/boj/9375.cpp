#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, int> clothes;
        while (n--) {
            string x, y;
            cin >> x >> y;
            clothes[y] += 1;
        }
        int x = 1;
        for (auto &clothe : clothes) {
            x *= clothe.second + 1;
        }
        cout << x - 1 << endl;
    }
}

int main() {
    fastio();
    solve();
}
