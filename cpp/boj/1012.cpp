#include "bits/stdc++.h"

using namespace std;

int graph[50][50];
int N, M;

int dx[4] = {0, 0, -1, +1};
int dy[4] = {+1, -1, 0, 0};

bool BFS(int x, int y){
    queue<pair<int, int>> q;
    if (graph[x][y] == 0){
        return false;
    }
    q.push(make_pair(x, y));
    graph[x][y] = 0;
    while (!q.empty()){
        int cur_x, cur_y;
        cur_x = q.front().first;
        cur_y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M && graph[nx][ny] == 1){
                q.push(make_pair(nx, ny));
                graph[nx][ny] = 0;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int K;
        cin >> M >> N >> K;
        for (int i = 0; i < K; i++){
            int x, y;
            cin >> y >> x;
            graph[x][y] = 1;
        }
        int ans = 0;
        for (int x = 0; x < N; x++){
            for (int y = 0; y < M; y++){
                if (BFS(x, y)){
                    ans += 1;
                }
            }
        }

        cout << ans << "\n";

        for (int x = 0; x < N; x++){
            for (int y = 0; y < M; y++){
                graph[x][y] = 0;
            }
        }
    }

}