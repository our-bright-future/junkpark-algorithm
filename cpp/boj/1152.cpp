#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    int ans = 1, i;
    getline(cin, s);


    for (i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            ans += 1;
        }
    }
    if (s[0] == '\0' || s[0] == ' '){
        ans -= 1;
    }
    if (s[s.length() - 1 ] == ' '){
        ans -= 1;
    }

    cout << ans << endl;
}
