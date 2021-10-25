#include <bits/stdc++.h>

using namespace std;

int n;
int zero, one;

pair<int, int> dp[40];

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    dp[0] = make_pair(1, 0);
    dp[1] = make_pair(0, 1);

    for (int i = 2; i <= 40; i++){
        int zero = dp[i-1].first+dp[i-2].first;
        int one = dp[i-1].second+dp[i-2].second;
        dp[i] = make_pair(zero, one);
    }

    cin >> n;
    while (n--){
        int x;
        cin >> x;
        cout << dp[x].first << ' ' << dp[x].second << "\n";
    }
}
