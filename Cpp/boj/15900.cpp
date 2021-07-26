#include "bits/stdc++.h"
using namespace std;

int n;
vector<int> graph[500001];
bool visited[500001];
int ans = 0;

void dfs(int x, int len) {
    // 현재 노드를 방문 처리
    visited[x] = true;
    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문

    if (graph[x].size() == 1 && visited[graph[x][0]]){
        ans += len;
    }

    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y]) dfs(y, len+1);
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, 0);

    if (ans % 2 == 0){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

}