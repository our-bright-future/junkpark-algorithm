#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;


int main(){
    fast_cin;
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int ans = min(min(abs(x-w), abs(x-0)), min(abs(y-h), abs(y-0)));

    cout << ans << endl;
}