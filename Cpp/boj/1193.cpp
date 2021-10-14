#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int X;
    cin >> X;

    int tmp = X;
    if (X == 1) {
        cout << "1/1" << '\n';
    } else {
        int cnt = 1;
        while (tmp > cnt) {
            tmp -= cnt;
            cnt += 1;
        }
        int diff = X - cnt * (cnt - 1) / 2;

        int numerator = 1;
        int denominator = cnt;

        for (int i = 0; i < diff - 1; i++) {
            numerator += 1;
            denominator -= 1;
        }
        if (cnt % 2 == 1) {
            swap(numerator, denominator);
        }
        cout << numerator << '/' << denominator << '\n';

    }

}