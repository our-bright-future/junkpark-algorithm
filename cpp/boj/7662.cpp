#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

multiset<int> s;

int main() {
    fast_cin;

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        while (n--){
            char str;
            int x;
            cin >> str >> x;
            if (str == 'I'){
                s.insert(x);
                continue;
            }
            if (!s.empty() && x == 1){
                s.erase(--s.end());
                continue;
            }
            else if (!s.empty() && x == -1){
                s.erase(s.begin());
            }
        }
        if (s.empty()){
            cout << "EMPTY" << endl;
        }
        else {
            cout << *--s.end() << ' ' << *s.begin() << endl;
        }
        s.clear();
    }
}