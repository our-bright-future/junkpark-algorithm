#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve() {
	int n;
	cin >> n;
	vector<int> rings(n);
	for (auto &ring: rings) cin >> ring;
	for (int i = 1; i < n; i++) {
		int GCD = gcd(rings[0], rings[i]);
		cout << rings[0] / GCD << '/' << rings[i] / GCD << endl;
	}
}

int main() {
	fastio();
	solve();
}