#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;

    while (n--){

        int open = 0;
        bool is_VPS = true;

        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++){
            if (open < 0){
                is_VPS = false;
                break;
            }
            if (s[i] == '('){
                open += 1;
            } else {
                open -= 1;
            }
        }

        if (is_VPS){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}