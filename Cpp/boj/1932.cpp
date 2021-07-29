#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n;
vector<int> triangle[501];

int main() {
    fast_cin;

    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            int x;
            cin >> x;
            triangle[i].push_back(x);
        }
    }

    for (int i = n; i >= 1; i--){
        for (int j = 0; j < i-1; j++){
            triangle[i-1][j] = max(triangle[i][j], triangle[i][j+1]) + triangle[i-1][j];
        }
    }
    cout << triangle[1][0] << endl;
}