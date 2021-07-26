#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n;

int main() {
    fast_cin;

    cin >> n;
    int v[n+1]; fill_n(v, n+1, 0);

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v[i] = x;
    }

    sort(v, v+n+1);

    int tmp = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        ans += tmp + v[i];
        tmp += v[i];
    }

    cout << ans << endl;

}