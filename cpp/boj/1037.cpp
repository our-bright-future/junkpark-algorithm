#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve() {
	int n;
	cin >> n;
	vector<int> divisors(n);
	for (auto &divisor: divisors) cin >> divisor;
	sort(divisors.begin(), divisors.end());
	cout << divisors.front() * divisors.back() << endl;
}

int main() {
	fastio();
	solve();
}