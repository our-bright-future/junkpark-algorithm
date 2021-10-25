#include <bits/stdc++.h>
using namespace std;


int main() {
    int scale[8];
    for (int i = 0; i < 8; i++){
        cin >> scale[i];
    }
    int asc = 0, des = 0;

    for (int i = 0; i < 7; i++){
        if (scale[i] + 1 == scale[i+1]){
            asc += 1;
        } else if (scale[i] - 1 == scale[i+1]){
            des += 1;
        }
    }

    if (asc == 7){
        cout << "ascending" << endl;
    } else if (des == 7){
        cout << "descending" << endl;
    } else {
        cout << "mixed" << endl;
    }

}
