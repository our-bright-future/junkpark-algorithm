#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			q.push({x, i});
			pq.push(x);
		}
		int ans = 0;
		while (!pq.empty()) {
			if (pq.top() == q.front().first) {
				if (q.front().second == m) {
					cout << ans + 1 << endl;
					break;
				} else {
					ans += 1;
					q.pop();
					pq.pop();
				}
			} else {
				q.push(q.front());
				q.pop();
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
}
