#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

bool compare(int a, int b){
    if (a > b){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    fast_cin;

    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), compare);

    int ans = 0;
    for (int i = 0; i < n; i++){
        ans += a[i] * b[i];
    }
    cout << ans << endl;
}

