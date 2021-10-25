#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int alphabet[26];

int main() {
    fast_cin;

    memset(alphabet, -1, sizeof(alphabet));

    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++){
        int c = x[i] - 'a';
        if (alphabet[c] == -1){
            alphabet[c] = i;
        }
    }

    for (int i = 0; i < 26; i++){
        cout << alphabet[i] << ' ';
    }
}