#include "bits/stdc++.h"
//#include <iostream>
//#include <vector>
//#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &v : V) cin >> v;
    vector<int> DP(n);

    int ans = V[0];
    for (int i = 0; i < n; i++) {
        DP[i] = V[i];
    }
    for (int i = 1; i < n; i++) {
        DP[i] = max(DP[i], DP[i] + DP[i - 1]);
        ans = max(ans, DP[i]);
    }

    cout << ans << endl;
}
