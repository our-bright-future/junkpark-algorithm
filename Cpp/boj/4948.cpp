#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;

int main() {
    fast_cin;

    vector<int> prime(246912, 1);
    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i <= 246912; i++){
        if (prime[i] == 0) continue;

        if (2*i > prime.size()) break;
        for (int j = 2 * i; j < prime.size(); j += i){
            prime[j] = 0;
        }
    }

    while (1){
        int n;
        cin >> n;
        if (n == 0){
            break;
        }
        int ans = 0;
        for (int i = n + 1; i <= 2*n; i++){
            if (prime[i]){
                ans += 1;
            }
        }
        cout << ans << endl;
    }
}
