#include<bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    while (1) {
        char x;
        x = getchar();
        if (x == '\n') break;
        s.push_back(x);
    }
    sort(s.begin(), s.end(), greater<int>());

    for (auto c: s) {
        cout << c;
    }
    cout << '\n';
}
