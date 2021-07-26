#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
bool flag;
int main(){
    cin >> n;
    int ans = 0;
    while (n--){
        int x;
        cin >> x;
        if (x == 1){
            continue;
        } else {
            flag = true;
            for (int i = 2; i < x; i++){
                if (x % i == 0){
                    flag = false;
                    break;
                } else {
                    continue;
                }
            }
            if (flag) {
                ans += 1;
            }
        }

    }
    cout << ans;
}