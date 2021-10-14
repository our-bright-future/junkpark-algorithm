#include "bits/stdc++.h"
//#include <iostream>
//#include <vector>
//#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> V(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        V[i] = x + V[i - 1];
    }

    while (m--) {
        int i, j;
        cin >> i >> j;
        cout << V[j] - V[i - 1] << '\n';
    }

}
