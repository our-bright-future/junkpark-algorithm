#include "bits/stdc++.h"
//#include <iostream>
//#include <vector>
//#include <stack>

using namespace std;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string a;
    string b;
    cin >> a >> b;
    vector<vector<int>> DP(a.size() + 1, vector<int>(b.size() + 1, 0));

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) DP[i + 1][j + 1] = DP[i][j] + 1;
            else DP[i + 1][j + 1] = max(DP[i][j + 1], DP[i + 1][j]);
        }
    }
    cout << DP[a.size()][b.size()] << endl;
}
