#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

bool isPrime[1000001];

int main() {
    fast_cin;

    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i <= 1000001; i++){
        if (isPrime[i]){
            for (int j = i * 2; j < 1000001; j += i){
                isPrime[j] = false;
            }
        }
    }
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++){
        if (isPrime[i]){
            cout << i << endl;
        }
    }
}
