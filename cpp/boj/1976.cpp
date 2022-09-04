#include <bits/stdc++.h>

using namespace std;

// clang-format off
#define endl "\n"
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// clang-format on

int _find(int x, vector<int> &parent) {
    if (x == parent[x]) {
        return x;
    }
    return (parent[x] = _find(parent[x], parent));
}

void _union(int x, int y, vector<int> &parent) {
    int p_x = _find(x, parent);
    int p_y = _find(y, parent);

    parent[p_x] = min(p_x, p_y);
    parent[p_y] = min(p_x, p_y);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> parent(n + 1);
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            int tmp;
            cin >> tmp;
            if (tmp == 1) {
                if (_find(x, parent) != _find(y, parent)) _union(x, y, parent);
            }
        }
    }
    vector<int> routes(m);
    for (auto &route : routes) {
        cin >> route;
    }
    for (int i = 0; i < m - 1; i++) {
        if (_find(routes[i], parent) != _find(routes[i + 1], parent)) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

// clang-format off
int main() {
    #ifdef JUNKPARK
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio();
    solve();
}
// clang-format on
