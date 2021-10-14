#include<bits/stdc++.h>

using namespace std;

#define MAX 10000
bool isPrime[MAX + 1];

void sieve_Of_Eratosthenes(int N) {
    for (int i = 2; i <= N; i++) {
        isPrime[i] = 1;    // initialize isPrime[] array
    }
    int sqrtn = sqrt(N);
    for (int i = 2; i <= sqrtn; i++) {
        if (!isPrime[i]) continue;
        for (int j = i + i; j <= N; j += i) {
            isPrime[j] = 0;
        }
    }
}

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    sieve_Of_Eratosthenes(MAX);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a = n / 2, b = n / 2;
        while (!(isPrime[a] && isPrime[b])) {
            a -= 1;
            b += 1;
        }
        cout << a << ' ' << b << '\n';
    }
}
