#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix matrixMul(Matrix a, Matrix b) {
    Matrix ret(2, vector<long long>(2));
    ret[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % 1000000007;
    ret[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % 1000000007;
    ret[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % 1000000007;
    ret[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % 1000000007;
    return ret;
}

Matrix matrixPow(Matrix x, long long y) {
    Matrix ret = {{1, 1},
                  {1, 0}};
    while (y) {
        if (y % 2) ret = matrixMul(ret, x);
        x = matrixMul(x, x);
        y /= 2;
    }
    return ret;
}

int main() {
    long long n;
    cin >> n;
    Matrix x = matrixPow({{1, 1},
                          {1, 0}}, n);
    cout << x[1][1] << endl;
}
