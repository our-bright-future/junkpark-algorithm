#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int m, n;
int graph[1000][1000];
queue<pair<int, int>> q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};


int main() {
    fast_cin;

    cin >> m >> n;
    int crude_tomato = 0;

    for (int r = 0; r < n; r++){
        for (int c = 0; c < m; c++){
            int x;
            cin >> x;
            graph[r][c] = x;
            if (x == 1){
                q.push(make_pair(r, c));
            }
            else if (x == 0){
                crude_tomato += 1;
            }
        }
    }

    int ans = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (graph[nx][ny] == 0 && 0 <= nx && nx < n && 0 <= ny && ny < m) {
                graph[nx][ny] = graph[x][y] + 1;
                crude_tomato -= 1;
                ans = graph[nx][ny];
                q.push(make_pair(nx, ny));
            }
        }
    }

    if (crude_tomato){
        cout << -1 << endl;
    } else {
        cout << ans-1 << endl;
    }
}