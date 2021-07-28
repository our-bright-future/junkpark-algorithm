#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int N, M;
bool broken[10];

int main() {
    fast_cin;

    cin >> N >> M;
    for (int i = 0; i < M; i++){
        int x;
        cin >> x;
        broken[x] = true;
    }

    int ans = abs(100-N);

    for (int i = 0; i <= 1000000; i++){
        string str = to_string(i);
        bool clickable = true;
        for (char c : str){
            if (broken[c-'0']){
                clickable = false;
                break;
            }
        }
        if (clickable){
            int tmp = str.length() + abs(N-i);
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
}