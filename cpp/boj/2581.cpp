#include<bits/stdc++.h>

using namespace std;

#define MAX 10000
bool isPrime[MAX + 1];
int prime[MAX + 1], cnt, num, testcase, T;

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

    int m, n;
    cin >> m >> n;

    int ans = 0;
    int minimum = 1e9;
    for (int i = m; i <= n; i++) {
        if (isPrime[i]) {
            ans += i;
            minimum = min(minimum, i);
        }
    }
    if (ans == 0) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n' << minimum << '\n';
    }
}