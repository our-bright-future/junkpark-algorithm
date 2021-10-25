#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;
vector<int> v;

int main() {
    fast_cin;

    string a, b;
    cin >> a >> b;

    string tmp = "";
    for (int i = 2; i >= 0; i--){
        tmp += a[i];
    }
    a = tmp;

    tmp = "";
    for (int i = 2; i >= 0; i--){
        tmp += b[i];
    }
    b = tmp;

    if (stoi(a) > stoi(b)){
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}