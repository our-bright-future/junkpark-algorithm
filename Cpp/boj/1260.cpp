#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int N, M, V;
set<int> graph[1001];
bool visited[1001];

void DFS(int start){
    visited[start] = true;
    cout << start << ' ';
    for (int next : graph[start]){
        if (!visited[next]){
            DFS(next);
        }
    }
}

void BFS(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()){
        int now = q.front(); q.pop();
        cout << now << ' ';
        for (int next : graph[now]){
            if (!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    fast_cin;

    cin >> N >> M >> V;
    for (int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    DFS(V);
    cout << endl;
    memset(visited, false, sizeof(visited));
    BFS(V);
}