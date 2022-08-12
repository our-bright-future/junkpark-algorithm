#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve() {
	int n;
	cin >> n;
	queue<int> q;
	while (n--) {
		string s;
		int x;
		cin >> s;
		if (s == "push") {
			cin >> x;
			q.push(x);
		} else if (s == "empty") {
			if (q.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		} else if (s == "size") cout << q.size() << endl;
		else {
			if (q.empty()) cout << -1 << endl;
			else if (s == "front") cout << q.front() << endl;
			else if (s == "back") cout << q.back() << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
	}
}

int main() {
	fastio();
	solve();
}