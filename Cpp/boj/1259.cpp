#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
    while (true){
        cin >> s;
        if (s == "0"){
            break;
        }
        int len = s.length();
        bool is_palindrome = true;
        for (int i = 0; i < len / 2; i++){
            if (s[i] != s[len-1-i]){
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome){
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
}