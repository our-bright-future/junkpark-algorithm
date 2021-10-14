#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;

void hanoi(int n, int start, int mid, int end) {
    if (n == 1) {
        v.push_back({start, end});
        return;
    }
    hanoi(n - 1, start, end, mid);
    v.push_back({start, end});
    hanoi(n - 1, mid, start, end);
    return;
}

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
    cout << v.size() << '\n';
    for (auto x: v) {
        cout << x.first << ' ' << x.second << '\n';
    }
}
