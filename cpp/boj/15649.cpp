#include<bits/stdc++.h>

using namespace std;

void N_and_M(vector<bool> &visited, vector<int> &V, int n, int m, int depth) {
    if (depth == m) {
        for (auto v: V) {
            cout << v << ' ';
        }
        cout << '\n';
        return;
    } else {
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                V.push_back(i);
                visited[i] = true;
                N_and_M(visited, V, n, m, depth + 1);
                V.pop_back();
                visited[i] = false;
            }
        }
        return;
    }
}

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    vector<int> v;
    vector<bool> visited(n + 1, false);
    N_and_M(visited, v, n, m, 0);
}
