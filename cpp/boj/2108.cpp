#include<bits/stdc++.h>

using namespace std;


int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> V(n);
    int cnt[8001] = {0};
    for (auto &v: V) {
        cin >> v;
    }
    sort(V.begin(), V.end());

    // 산술평균
    int tmp = 0;
    for (auto x: V) {
        tmp += x;
    }
    cout << round(tmp / (double) n) << '\n';


    // 중앙값
    cout << V[n / 2] << '\n';

    // 최빈값
    for (auto x: V) {
        cnt[x + 4000] += 1;
    }
    int M = 0;
    int ans;
    int c = 1;
    for (int i = 0; i <= 8000; i++) {
        if (M < cnt[i]) {
            M = cnt[i];
            ans = i;
            c = 1;
            continue;
        }
        if (M == cnt[i] && c == 1) {
            ans = i;
            c--;
        }
    }
    cout << ans - 4000 << '\n';

    // 범위
    cout << *(V.end() - 1) - *V.begin() << '\n';
}
