#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;



int main() {
    fast_cin;

    stack<char> left;
    stack<char> right;

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        left.push(s[i]);
    }

    int n;
    cin >> n;
    while (n--){
        char x;
        cin >> x;
        if (x == 'L'){
            if (!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }
        else if (x == 'D'){
            if (!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }
        else if (x == 'B'){
            if (!left.empty()){
                left.pop();
            }
        }
        else {
            char c;
            cin >> c;
            left.push(c);
        }
    }
    while (!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while (!right.empty()){
        cout << right.top();
        right.pop();
    }
    cout << endl;
}

