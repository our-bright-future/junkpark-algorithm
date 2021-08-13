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

    while (1){
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0){
            return 0;
        }
        if (b % a == 0){
            cout << "factor" << endl;
        } else if (a % b == 0){
            cout << "multiple" << endl;
        } else {
            cout << "neither" << endl;
        }
    }
}