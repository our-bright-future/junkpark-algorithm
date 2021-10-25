#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    fast_cin;

    int n;
    int count[10001];
    memset(count, 0, sizeof(count));
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        count[x] += 1;
    }
    for (int i = 1; i <= 10000; i++){
        for (int j = 0; j < count[i]; j++){
            cout << i << endl;
        }
    }
}
