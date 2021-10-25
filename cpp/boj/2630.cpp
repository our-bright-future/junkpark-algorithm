#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n;
int graph[128][128];
int blue = 0;
int white = 0;

void solution(int x, int y, int n){
    bool flag = true;
    int first = graph[x][y];
    for (int nx = x; nx < x + n; nx++){
        for (int ny = y; ny < y + n; ny++){
            if (graph[nx][ny] != first){
                solution(x, y, n/2);
                solution(x+n/2, y, n/2);
                solution(x+n/2, y+n/2, n/2);
                solution(x, y+n/2, n/2);
                return;
            }
        }
    }
    if (first == 1){
        blue += 1;
    } else {
        white += 1;
    }
    return;
}

int main() {
    cin >> n;
    for (int r = 0; r < n; r++){
        for (int c = 0; c < n; c++){
            int x;
            cin >> x;
            graph[r][c] = x;
        }
    }
    solution(0, 0, n);

    cout << white << endl;
    cout << blue << endl;
}