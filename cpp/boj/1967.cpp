#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

vector<pair<int, int>> graph[100001];
bool visited[100001];
int V;
pair<int, int> BFS(int V){
    queue<pair<int, int>> q;
    q.push(make_pair(V, 0));
    visited[V] = true;
    int distance = 0;
    int node;
    while (!q.empty()){
        int now = q.front().first;
        int dist = q.front().second;
        q.pop();
        for (int i = 0; i < graph[now].size(); i++){
            int next = graph[now][i].first;
            int cost = graph[now][i].second;
            if (!visited[next]){
                visited[next] = true;
                q.push(make_pair(next, dist + cost));
                if (distance < dist + cost){
                    distance = max(distance, dist + cost);
                    node = next;
                }
            }
        }
    }
    return make_pair(node, distance);
}

int main() {
    fast_cin;

    cin >> V;
    for (int i = 1; i < V; i++){
        int x, y, dist;
        cin >> x >> y >> dist;
        graph[x].push_back(make_pair(y, dist));
        graph[y].push_back(make_pair(x, dist));

    }

    pair<int, int> p = BFS(1);
    memset(visited, false, sizeof(visited));
    pair<int, int> ans = BFS(p.first);
    cout << ans.second << endl;


}