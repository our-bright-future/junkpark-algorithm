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
    bool arr[2000+1];

    memset(arr, false, sizeof(arr));

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x+1000] = true;
    }

    for (int i = 0; i <= 2000; i++){
        if (arr[i]){
            cout << i-1000 << ' ';
        }
    }
}
