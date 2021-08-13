#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

int main() {
    fast_cin;

    queue<int> q;

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++){
        q.push(i);
    }

    cout << '<';
    while (!q.empty()){
        for (int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (!q.empty()){
            cout << ", ";
        }
    }
    cout << '>';
}
