#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"

void solve() {
    int n;
    unsigned long long cost = 0;
    cin >> n;

    vector<int> roads(n - 1);
    vector<int> cities(n);
    for (auto &road : roads) cin >> road;
    for (auto &city : cities) cin >> city;
    unsigned long long _min = cities[0];
    unsigned long long length = roads[0];
    for (int i = 1; i < n - 1; i++) {
        if (_min > cities[i]) {
            cost += _min * length;
            _min = cities[i];
            length = roads[i];
        } else {
            length += roads[i];
        }
    }
    cout << cost + length * _min << endl;
}

int main() {
    fastio();
    solve();
}
