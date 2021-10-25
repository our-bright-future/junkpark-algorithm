#include <bits/stdc++.h>

using namespace std;

int t;
int n;
int c;
int total_c = 0;
float g;
float total = 0;


int main(){
    cin >> t;

    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < t; i++){
        cin >> n;

        total_c = 0;
        total = 0;

        for (int j = 0; j < n; j++){
            cin >> c >> g;
            total += c*g;
            total_c += c;
        }
        cout << total_c << " " << total/total_c << "\n";
    }
}