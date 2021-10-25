#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<long long int> v;

int main(){
    cin >> n >> m;
    long long int ans = 0;
    while (n--){
        int x;
        cin >> x;
        v.push_back(x);
        ans += x;
    }
    while (m--){
        sort(v.begin(), v.end());
        long long int a = v[0];
        long long int b = v[1];
        v[0] = a+b;
        v[1] = a+b;
        ans += a+b;
    }

    cout << ans << endl;
}
