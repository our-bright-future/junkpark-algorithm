#include <bits/stdc++.h>

using namespace std;

int n, k;
float p, w;
int ans = 0;


int main(){
    cin >> n >> k >> p >> w;
    ans += ceil(p / w);
    cout << ans << endl;
}
