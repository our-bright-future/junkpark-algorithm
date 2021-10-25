#include <bits/stdc++.h>

using namespace std;

struct DSU {
    vector<int> parent;

    DSU(int n) : parent(n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u == parent[u]) return u;
        else return parent[u] = find(parent[u]);
    }

    void merge(int u, int v) {
        u = find(u);
        v = find(v);
        parent[u] = v;
    }
};

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    DSU dsu = DSU(n + 1);

    while (m--) {
        int command, a, b;
        cin >> command >> a >> b;
        if (command == 0) {
            dsu.merge(a, b);
        } else {
            if (dsu.find(a) == dsu.find(b)) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
}
