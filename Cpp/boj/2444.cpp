#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    n = n * 2 - 1;
    for (int i = 1; i <= n; i += 2){
        for (int j = 0; j < (n - i) / 2; j++){
            cout << " ";
        }

        for (int j = 0; j < i; j++){
            cout << "*";
        }

        cout << "\n";
    }
    for (int i = n-2; i >= 1; i -= 2){
        for (int j = 0; j < (n - i) / 2; j++){
            cout << " ";
        }

        for (int j = 0; j < i; j++){
            cout << "*";
        }

        cout << "\n";
    }

}