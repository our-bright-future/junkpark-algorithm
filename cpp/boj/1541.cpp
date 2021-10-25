#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;



int main() {
    fast_cin;

    string str;
    getline(cin, str);
    string tmp = "";
    int ans = 0;
    bool minus = false;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '-'){
            if (minus){
                ans -= stoi(tmp);
                tmp = "";
            }
            else {
                ans += stoi(tmp);
                tmp = "";
            }
            minus = true;
        }
        else if (str[i] == '+'){
            if (minus){
                ans -= stoi(tmp);
                tmp = "";
            }
            else {
                ans += stoi(tmp);
                tmp = "";
            }
        }
        else {
            tmp += str[i];
        }
    }

    if (minus){
        ans -= stoi(tmp);
        tmp = "";
    }
    else {
        ans += stoi(tmp);
        tmp = "";
    }

    cout << ans << endl;
}