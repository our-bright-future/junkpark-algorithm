#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n, e;
vector<int> graph[101];
bool visited[101];

int main() {
    fast_cin;

    cin >> n >> e;

    for (int i = 0; i < e; i++){
        int x, y;
        cin >> x >> y;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int ans = 0;
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while (!q.empty()){
        int now = q.front(); q.pop();
        for (int next : graph[now]){
            if (!visited[next]){
                visited[next] = true;
                q.push(next);
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}