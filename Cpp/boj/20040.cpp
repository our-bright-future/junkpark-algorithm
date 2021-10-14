#include <bits/stdc++.h>

using namespace std;

struct DSU {
    vector<int> parent, rank;

    DSU(int n) : parent(n), rank(n) {
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
        if (u == v) return;
        if (rank[u] > rank[v]) swap(u, v);
        parent[u] = v;
        if (rank[u] == rank[v]) rank[v] += 1;
    }
};

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    DSU dsu = DSU(n);

    bool is_finished = false;
    int turn;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (dsu.find(a) == dsu.find(b) && !is_finished) {
            is_finished = true;
            turn = i + 1;
            break;
        } else {
            dsu.merge(a, b);
        }
    }
    if (is_finished) {
        cout << turn << '\n';
    } else {
        cout << 0 << '\n';
    }
}
