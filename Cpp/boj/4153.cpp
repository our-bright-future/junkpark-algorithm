#include <bits/stdc++.h>

using namespace std;


int main(){
    while (true){

        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0){
            break;
        }
        vector<int> v;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());

        a = v[0];
        b = v[1];
        c = v[2];

        if (a * a + b * b == c * c){
            cout << "right" << "\n";
        } else {
            cout << "wrong" << "\n";
        }

        v.clear();

    }
}