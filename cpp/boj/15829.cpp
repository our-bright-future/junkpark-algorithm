#include <bits/stdc++.h>

using namespace std;


int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int L;
    long long Hash = 0;
    cin >> L;
    long long r = 31;
    long long M = 1234567891;
    long long k = 1;
    for (int i = 0; i < L; i++) {
        char x;
        cin >> x;
        Hash = (Hash + (x - 'a' + 1) * k) % M;
        k = (k * r) % M;
    }
    cout << Hash << endl;

}