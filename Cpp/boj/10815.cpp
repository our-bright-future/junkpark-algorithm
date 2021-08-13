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

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int m;
    cin >> m;
    while (m--){
        int x;
        cin >> x;
        auto up = upper_bound(v.begin(), v.end(), x);
        auto low = lower_bound(v.begin(), v.end(), x);
        if (up - low == 0){
            cout << 0 << ' ';
        }
        else {
            cout << 1 << ' ';
        }
    }
}

