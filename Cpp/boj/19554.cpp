#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);

using namespace std;
using ll = long long;


int query(int x){
    cout << "? " << x << '\n' << flush;
    int res;
    cin >> res;
    return res;
}

void guess(int x){
    cout << "= " << x << '\n' << flush;
}

int main() {
    fast_cin;

    int n;
    cin >> n;

    int l = 1, r = n;

    while (true){
        int m = (l + r + 1) / 2;
        int res = query(m);
        if (res == 1){
            r = m - 1;
        }
        else if (res == 0){
            guess(m);
            return 0;
        }
        else if (res == -1) {
            l = m;
        }
    }
}