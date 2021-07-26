#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    while (n--){
        cin.ignore();
        string str;
        getline(cin, str);
        int x;
        for (int i = 0; i < str.length(); i++){
            if (str[i] == ' '){
                cout << "god";
                x = i;
                break;
            }
        }
        for (int i = x + 1; i < str.length(); i++){
            if (str[i] == ' '){
                continue;
            } else {
                cout << str[i];
            }
        }
        cout << "\n";
    }
}
