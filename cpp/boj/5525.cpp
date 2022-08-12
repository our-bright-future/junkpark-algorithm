#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void solve() {
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	vector<int> v(m, 0);
	int ans = 0;
	for (int i = 2; i < m; i++) {
		if (s[i - 2] == 'I' && s[i - 1] == 'O' && s[i] == 'I') {
			v[i] = v[i - 2] + 1;
			if (v[i] >= n)
				ans += 1;
		}
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
}
