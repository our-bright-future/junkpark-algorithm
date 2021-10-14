#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int V, E;
int K;
priority_queue<pair<int, int>> pq;
vector<pair<int, int>> graph[20001];
int d[20001];

int u, v, w;

void dijkstra(int start) {
    pq.push({0, start});
    d[start] = 0;
    while (!pq.empty()){
//        지금 까지의 거리 dist
        int dist = -pq.top().first;
//        현재 위치
        int now = pq.top().second;
        pq.pop();
//        만약 저장된 값보다 지금 까지의 거리가 더 크면 무시
        if (d[now] < dist) continue;
//        현재 노드를 거쳐 가는 값이 저장된 값보다 더 작은지 확인 후 pq에 푸시
        for (int i = 0; i < graph[now].size(); i++){
            int cost = dist + graph[now][i].second;
            if (cost < d[graph[now][i].first]){
                d[graph[now][i].first] = cost;
//                최대 힙이라 -로 넣어줌!
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main(){
    fast_cin;

    cin >> V >> E;
    cin >> K;

    for (int i = 0; i < E; i++){
        cin >> u >> v >> w;
        graph[u].push_back(make_pair(v, w));
    }

    fill(d, d + 20001, 1e9);

    dijkstra(K);

    for (int i = 1; i <= V; i++){
        if (d[i] != 1e9) {
            cout << d[i] << endl;
            continue;
        }
        cout << "INF" << endl;
    }
}