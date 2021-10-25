#include <bits/stdc++.h>

using namespace std;

int total;
int price;

int main(){
    cin >> total;
    for (int i = 0; i < 9; i++){
        cin >> price;
        total -= price;
    }
    cout << total << endl;
}