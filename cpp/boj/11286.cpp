#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void solve() {
    priority_queue<pair<int, int>, vector<pair<int, int>>,
                   greater<pair<int, int>>>
        pq;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x == 0) {
            if (pq.empty())
                cout << 0 << endl;
            else {
                cout << pq.top().second << endl;
                pq.pop();
            }
        } else {
            pq.push({abs(x), x});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
