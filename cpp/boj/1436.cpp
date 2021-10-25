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

    int n;
    cin >> n;
    int tmp = 0;
    int title;

    for (int i = 666; i <= 1e9; i++){
        string s = to_string(i);
        if (s.find("666") != string::npos){
            tmp += 1;
            title = i;
        }
        if (tmp == n){
            break;
        }

    }
    cout << title << endl;
}
