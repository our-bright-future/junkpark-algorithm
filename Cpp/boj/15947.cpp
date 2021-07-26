#include <bits/stdc++.h>

using namespace std;

int n;

string str[14] = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};


int main(){
    cin >> n;
    if (n < 14){
        cout << str[n-1] << endl;
    } else {
        int q = n / 14;
        int r = n % 14;
        if (r == 0){
            r = 14;
        }
        if (str[r-1] == "tururu"){
            if (q > 2){
                cout << "tu+ru*" << q + 2;
            } else {
                cout << str[r-1];
                for (int i = 0; i < q; i++){
                    cout << "ru";
                }
            }
        } else if (str[r-1] == "turu"){
            if (q > 3){
                cout << "tu+ru*" << q + 1;
            } else {
                cout << str[r-1];
                for (int i = 0; i < q; i++){
                    cout << "ru";
                }
            }
        } else {
                cout << str[r-1];
        }
    }
}
