#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;


bool isPrime(long long N){
    for (int i = 2; i * i <= N; i++){
        if (N%i == 0){
            return false;
        }
    }
    return true;
}

long long modpow(long long a, long long p){
    long long ret = 1;
    long long x = a;
    long long MOD = p;
    while (p){
        if (p % 2) ret = (ret * x) % MOD;
        x = x * x % MOD;
        p /= 2;
    }
    return ret;
}

int main() {
    fast_cin;

    while(1){
        long long a, p;
        cin >> p >> a;
        if (a == 0){
            break;
        }
        if (!isPrime(p) && a == modpow(a, p)){
            cout << "yes" << endl;
        }
        else {
            cout << "no" <<endl;
        }
    }
}

