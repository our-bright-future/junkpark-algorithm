#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int N, M, V;

int main() {
    fast_cin;

    cin >> N >> M;

    int floyd_warshall[101][101];
    for (int i = 0; i < 101; i++){
        for (int j = 0; j < 101; j++){
            floyd_warshall[i][j] = 1e9;
            if (i == j){
                floyd_warshall[i][j] = 0;
            }
        }
    }
    while (M--){
        int a, b;
        cin >> a >> b;
        floyd_warshall[a][b] = 1;
        floyd_warshall[b][a] = 1;
    }

    for (int t = 1; t <= N; t++){
        for (int a = 1; a <= N; a++){
            for (int b = 1; b <= N; b++){
                floyd_warshall[a][b] = min(floyd_warshall[a][b], floyd_warshall[a][t] + floyd_warshall[t][b]);
            }
        }
    }

    int num, kevin = 1e9;

    for (int i = 1; i <= N; i++){
        int tmp = 0;
        for (int j = 1; j <= N; j++){
            tmp += floyd_warshall[i][j];
        }
        if (tmp < kevin){
            kevin = tmp;
            num = i;
        }
    }
    cout << num << endl;
}