#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define all(x) (x).begin(), (x).end()

void solve() {
    deque<int> q;
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) q.push_back(i + 1);
    while (m--) {
        int x;
        cin >> x;
        if (q.front() == x)
            q.pop_front();
        else {
            int idx = find(all(q), x) - q.begin();
            if (idx < q.size() - idx) {
                while (idx--) {
                    q.push_back(q.front());
                    q.pop_front();
                    ans += 1;
                }
                q.pop_front();
            } else {
                idx = q.size() - idx;
                while (idx--) {
                    q.push_front(q.back());
                    q.pop_back();
                    ans += 1;
                }
                q.pop_front();
            }
        }
    }
    cout << ans << endl;
}

int main() {
    fastio();
    solve();
}
