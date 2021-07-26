#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    int remain = 0;
    while (n--){
        int students, apples, Q;
        cin >> students >> apples;
        Q = apples/students;
        remain += apples - (Q * students);
    }

    cout << remain;
}