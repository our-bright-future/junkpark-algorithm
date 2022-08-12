#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve() {
	while (true) {
		string s;
		getline(cin, s);
		if (s == ".")
			break;
		vector<char> v;
		bool flag = true;
		for (char c: s) {
			if (c == '(') v.push_back('(');
			else if (c == ')') {
				if (!v.empty() && v.back() == '(') v.pop_back();
				else flag = false;
			} else if (c == '[') v.push_back('[');
			else if (c == ']') {
				if (!v.empty() && v.back() == '[') v.pop_back();
				else flag = false;
			}
		}
		if (v.empty() && flag) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

int main() {
	fastio();
	solve();
}