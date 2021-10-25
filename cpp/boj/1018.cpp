#include <bits/stdc++.h>

using namespace std;

int n, m;
char graph[50][50];
string s;

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char x;
            cin >> x;
            graph[i][j] = x;
        }
    }

    int ans = 65;

    for (int i = 0; i <= n-8; i++){
        for (int j = 0; j <= m-8; j++){
            if (graph[i][j] == 'W'){
                s  = "WBW";
            } else {
                s = "BWB";
            }
            int cnt1 = 0;
            int cnt2 = 0;
            for (int x = 0; x < 8; x++){
                for (int y = 0; y < 8; y++){
                    if (s[(x + y) % 2] != graph[i+x][j+y]){
                        cnt1 += 1;
                    }
                    if (s[(x + y) % 2+1] != graph[i+x][j+y]){
                        cnt2 += 1;
                    }
                }
            }
            ans = min(ans, cnt1);
            ans = min(ans, cnt2);
        }
    }
    cout << ans << endl;
}