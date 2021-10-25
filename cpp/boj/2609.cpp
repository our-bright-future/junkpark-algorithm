#include <bits/stdc++.h>

using namespace std;

int n, m;

int gcd(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b, int gcd){
    return (a * b) / gcd;
}

int main(){
    cin >> n >> m;
    int g = gcd(n, m);
    int l = lcm(n, m, g);
    cout << g << endl;
    cout << l << endl;
}