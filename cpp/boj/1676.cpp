#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve() {
	int n;
	long long int five = 0, two = 0;
	cin >> n;
	for (int i = n; i > 0; i--) {
		int x = i;
		while (x % 5 == 0) {
			five += 1;
			x /= 5;
		}
		while (x % 2 == 0) {
			two += 1;
			x /= 2;
		}
	}
	cout << min(five, two) << endl;
}

int main() {
	fastio();
	solve();
}