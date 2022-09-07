#include <bits/stdc++.h>

using namespace std;

// clang-format off
#define endl "\n"
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// clang-format on

void solve() {
    int n, m;
    int dx[4] = {0, 0, -1, +1};
    int dy[4] = {+1, -1, 0, 0};
    cin >> n >> m;
    vector<vector<char>> graph(n, vector<char>(m, 0));
    vector<vector<int>> visited(n, vector<int>(m, 0));
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            cin >> graph[x][y];
            graph[x][y] -= '0';
        }
    }
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;
    while (!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            pair<int, int> next;
            next.first = now.first + dx[i];
            next.second = now.second + dy[i];
            if (0 <= next.first && next.first < n && 0 <= next.second &&
                next.second < m) {
                if (graph[next.first][next.second] == 1 &&
                    !visited[next.first][next.second]) {
                    q.push(next);
                    visited[next.first][next.second] =
                        visited[now.first][now.second] + 1;
                }
            }
        }
    }
    cout << visited[n - 1][m - 1] << endl;
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
