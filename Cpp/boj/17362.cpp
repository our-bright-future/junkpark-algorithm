#include <bits/stdc++.h>

using namespace std;

long long int n;

int main(){
    cin >> n;
    int r, ans;
    r = n % 8;
    if (r == 1){
        ans = 1;
    } else if (r == 2 || r == 0){
        ans = 2;
    } else if (r == 3 || r == 7){
        ans = 3;
    } else if (r == 4 || r == 6){
        ans = 4;
    } else {
        ans = 5;
    }
    cout << ans << endl;

}
