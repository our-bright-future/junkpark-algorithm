#include "bits/stdc++.h"

using namespace std;

int n, s, d;
int depth[100001];
bool visited[100001];
vector<int> graph[100001];
int ans = 0;

int dfs(int x) {
    visited[x] = true;

    if (graph[x].size() == 1 && visited[graph[x][0]]){
        return 0;
    }
    int deep = 0;
    for (int i = 0; i < graph[x].size(); i++){
        int nx = graph[x][i];
        if (!visited[nx]){
            deep = max(deep, dfs(nx) + 1);
            depth[x] = deep;
        }
    }
    return depth[x];
}

void solution(int s){
    visited[s] = true;
    for (int i = 0; i < graph[s].size(); i++){
        if (depth[graph[s][i]] >= d && !visited[graph[s][i]]){
            ans += 2;
            solution(graph[s][i]);
        }
    }
}


int main() {
    cin >> n >> s >> d;
    for (int i = 1; i < n; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(s);
    memset(visited, false, sizeof(visited));
    solution(s);
    cout << ans << endl;

}