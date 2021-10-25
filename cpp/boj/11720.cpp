#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, sum = 0;
    cin >> n;
    char tmp;

    for (int i; i < n; i++) {
        cin >> tmp;
        sum += tmp - '0';
    }
    cout << sum << endl;
}
