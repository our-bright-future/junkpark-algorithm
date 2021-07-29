#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;


int main() {
    fast_cin;
    long long a, b, c;

    cin >> a >> b >> c;
    long long ans = 1;
    while (b != 0){
        if (b % 2 == 1){
            ans *= a;
            ans %= c;
        }
        a = a * a;
        // 미리 나머지 연산을 해도 값은 같다!
        a %= c;
        b /= 2;
    }

    cout << ans << endl;

}