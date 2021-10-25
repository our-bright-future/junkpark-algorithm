#include "bits/stdc++.h"
using namespace std;

int n, m;

vector<int> graph[200001];
int time1[200001];

int main(){
    cin >> n;
    for (int i = 0; i <= 200000; i++){
        time1[i] = -1;
    }
    for (int i = 0; i < n; i++){
        while (true){
            int x;
            cin >> x;
            if (x == 0){
                break;
            }
            graph[i+1].push_back(x);
        }
    }

    cin >> m;
    queue<pair<int, int>> q;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        q.push(make_pair(x, 0));
        time1[x] = 0;
    }

    queue<pair<int, int>> tmp;
    while (!q.empty()){
        int x = q.front().first;
        int time = q.front().second;
        q.pop();

        for (int i = 0; i < graph[x].size(); i++){
            if (time1[graph[x][i]] != -1){
                continue;
            }
            int injected = 0;
            for (int j = 0; j < graph[graph[x][i]].size(); j++){
                if (time1[graph[graph[x][i]][j]] != -1){
                    injected += 1;
                }
            }
            if (graph[graph[x][i]].size() <= injected * 2){
                tmp.push(make_pair(graph[x][i], time+1));
            }

        }
        if (q.empty()){
            while (!tmp.empty()){
                int x = tmp.front().first;
                int t = tmp.front().second;
                tmp.pop();
                time1[x] = t;
                q.push(make_pair(x, t));
            }
        }

    }
    for (int i = 1; i <= n; i++){
        cout << time1[i] << ' ';
    }

}