#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n, m;
priority_queue<int> pq;
vector<int> graph[1001];
bool visited[1001];

int main() {
    fast_cin;

    cin >> n >> m;
    while (m--){
        int s, e;
        cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            ans += 1;
            visited[i] = true;
            queue<int> q;
            q.push(i);
            while (!q.empty()){
                int now = q.front();
                q.pop();
                for (int next : graph[now]){
                    if (!visited[next]){
                        q.push(next);
                        visited[next] = true;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}