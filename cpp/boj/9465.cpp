#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int t;
int stickers[100001][2];

int main(){
    fast_cin;

    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int j = 0; j < 2; j++){
            for (int i = 1; i <= n; i++){
                int x;
                cin >> x;
                stickers[i][j] = x;
            }
        }
        stickers[2][0] = stickers[1][1] + stickers[2][0];
        stickers[2][1] = stickers[1][0] + stickers[2][1];

        for (int i = 3; i <= n; i++){
            stickers[i][1] += max(stickers[i-1][0], max(stickers[i-2][0], stickers[i-2][1]));
            stickers[i][0] += max(stickers[i-1][1], max(stickers[i-2][0], stickers[i-2][1]));
        }

        cout << max(stickers[n][0], stickers[n][1]) << endl;
        memset(stickers, 0, sizeof(stickers));
    }
}