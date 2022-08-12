#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void solve() {
	int n, m;
	map<string, string> dict;
	cin >> n >> m;
	while (n--) {
		string site, password;
		cin >> site >> password;
		dict[site] = password;
	}
	while (m--) {
		string site;
		cin >> site;
		cout << dict[site] << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
}
