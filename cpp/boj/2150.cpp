#include <bits/stdc++.h>

using namespace std;

stack<int> S;
vector<int> order(100001, 0);
vector<int> out(100001, 0);
int order_count = 1;
// S: 정점을 함수 호출 순서대로 넣고 SCC에 기록할 때 빼내는 스택
// order: DFS 방문 순서
// out: SCC에 이미 포함된 정점들을 기록

vector<vector<int>> E(100001);
vector<vector<int>> scc;

int tarjan(int cur) {
    order[cur] = ++order_count;
    S.push(cur);

    int order_min = order[cur];
    for (auto next : E[cur]) {
        if (order[next] == 0)
            order_min = min(order_min, tarjan(next));
        else if (out[next] == 0)
            order_min = min(order_min, order[next]);
        // 스택에 이미 들어있는 정점으로 가는 간선은 역방향 간선이다.
    }

    if (order_min == order[cur]) {
        vector<int> cur_scc;
        while (1) {
            int t = S.top();
            S.pop();
            cur_scc.push_back(t);
            out[t] = 1;
            if (t == cur) break;
        }
        sort(cur_scc.begin(), cur_scc.end());
        scc.push_back(cur_scc);
    }
    return order_min;
}

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        E[a].push_back(b);
    }

    for (int i = 1; i <= v; i++) {
        if (order[i] == 0) tarjan(i);
    }

    sort(scc.begin(), scc.end());

    cout << scc.size() << '\n';
    for (auto &ele : scc) {
        for (auto &x : ele) {
            cout << x << ' ';
        }
        cout << -1 << '\n';
    }
}
