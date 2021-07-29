#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n;
vector<int> graph[100001];
int parent[100001];

void BFS(int V){
    parent[V] = V;
    queue<int> q;
    q.push(V);
    while (!q.empty()){
        int now = q.front(); q.pop();
        for (int next : graph[now]){
            if (parent[next] == 0){
                parent[next] = now;
                q.push(next);
            }
        }
    }
}

int main(){
    fast_cin;

    cin >> n;
    for (int i = 1; i < n; i++){
        int s, e;
        cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    BFS(1);
    for (int i = 2; i <= n; i++){
        cout << parent[i] << endl;
    }


}