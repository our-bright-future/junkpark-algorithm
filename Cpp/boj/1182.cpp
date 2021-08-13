#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

vector<int> num;
int n, s;
int ans = 0;
int tmp = 0;

void solution(int idx, int depth, int size){
    if (depth == size){
        if (tmp == s){
            ans += 1;
        }
        return;
    }

    for (int i = idx; i < n; i++){
        tmp += num[i];
        solution(i+1, depth+1, size);
        tmp -= num[i];
    }
}

int main() {
    fast_cin;

    cin >> n >> s;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        num.push_back(x);
    }
    for (int i = 1; i <= n; i++){
        solution(0, 0, i);
    }
    cout << ans << endl;
}
