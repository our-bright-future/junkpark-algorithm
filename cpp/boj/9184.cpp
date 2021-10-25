#include "bits/stdc++.h"
//#include <iostream>
//#include <vector>
//#include <stack>

using namespace std;

int cache[21][21][21];

int w(int a, int b, int c) {
    if (a <= 0 or b <= 0 or c <= 0) {
        cache[0][0][0] = 1;
        return cache[0][0][0];
    }
    if (a > 20 or b > 20 or c > 20) {
        cache[20][20][20] = w(20, 20, 20);
        return cache[20][20][20];
    }
    if (a < b and b < c) {
        if (cache[a][b][c] != 0) {
            return cache[a][b][c];
        }
        cache[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return cache[a][b][c];
    } else {
        if (cache[a][b][c] != 0) {
            return cache[a][b][c];
        }
        cache[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        return cache[a][b][c];
    }
}

int main() {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == -1 and b == -1 and c == -1) {
            return 0;
        } else {
            cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
        }
    }
}
