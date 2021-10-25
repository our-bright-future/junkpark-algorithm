#include "bits/stdc++.h"

#define endl "\n";

using namespace std;

int visited[100001];

int main() {
    int n, k;
    cin >> n >> k;

    queue<int> q;
    q.push(n);
    while (!q.empty()){
        int now = q.front(); q.pop();
        if (now == k){
            break;
        }

        if (0 <= now + 1 and now + 1 <= 100001 and visited[now + 1] == 0){
            q.push(now + 1);
            visited[now + 1] = visited[now] + 1;
        }
        if (0 <= now - 1 and now - 1 <= 100001 and visited[now - 1] == 0){
            q.push(now - 1);
            visited[now - 1] = visited[now] + 1;
        }
        if (0 <= now * 2 and now * 2 <= 100001 and visited[now * 2] == 0){
            q.push(now * 2);
            visited[now * 2] = visited[now] + 1;
        }
    }

    cout << visited[k] << endl;
}