#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;

    for (int x = -999; x < 1000; x++){
        for (int y = -999; y < 1000; y++){
            if (a*x + b*y == c && d*x + e*y == f){
                cout << x << ' ' << y << '\n';
            }
        }
    }
}
