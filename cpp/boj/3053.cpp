#include<bits/stdc++.h>

using namespace std;

const double pi = 3.14159265359;

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int r;
    cin >> r;
    cout << fixed;
    cout.precision(10);
    cout << pi * r * r << endl;
    cout << (r * 2) * r << '\n';
}
