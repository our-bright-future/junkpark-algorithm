#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int n, m;
int ans = 0;
int chess[16];

bool check(int row, int col){
    for (int i = 0; i < row; i++){
        if (chess[i] == col || abs(col - chess[i]) == abs(row - i)){
            return false;
        }
    }
    return true;
}

void N_Queen(int row){
    if (row == n){
        ans += 1;
        return;
    }
    for (int col = 0; col < n; col++){
        if (check(row, col)){
            chess[row] = col;
            N_Queen(row+1);
        }
    }
}

int main(){
    fast_cin;

    cin >> n;
    N_Queen(0);
    cout << ans << endl;
}