#include <bits/stdc++.h>

using namespace std;

int n, m;
char graph[100][100];

int main(){
    memset(graph, 46, sizeof(graph));
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char x;
            cin >> x;
            if (x == 79){
                graph[i][m-1-j] = 'O';
            } else if (x == 45){
                graph[i][m-1-j] = '|';
            } else if (x == 124){
                graph[i][m-1-j] = '-';
            } else if (x == 47){
                graph[i][m-1-j] = '\\';
            } else if (x == 92){
                graph[i][m-1-j] = '/';
            } else if (x == 94){
                graph[i][m-1-j] = '<';
            } else if (x == 60){
                graph[i][m-1-j] = 'v';
            } else if (x == 118){
                graph[i][m-1-j] = '>';
            } else if (x == 62){
                graph[i][m-1-j] = '^';
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << graph[j][i];
        }
        cout << '\n';
    }

}
