#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;

int dist[101][101];

int main(){
    fast_cin;

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            dist[i][j] = 1e9;
        }
    }

    for (int i = 1; i <= n; i++){
        dist[i][i] = 0;
    }

    while (m--){
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
    }

    for (int v = 1; v <= n; v++){
        for (int s = 1; s <= n; s++){
            for (int e = 1; e <= n; e++){
                dist[s][e] = min(dist[s][e], dist[s][v] + dist[v][e]);
            }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (dist[i][j] == 1e9){
                cout << 0 << ' ';
            }
            else {
                cout << dist[i][j] << ' ';
            }
        }
        cout << endl;
    }
}