#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

vector<int> v;
vector<int> num;
int n;

void solution(int idx, int depth){
    if (depth == 6){
        for (int ele : v){
            cout << ele << ' ';
        }
        cout << endl;
        return;
    }

    for (int i = idx; i < n; i++){
        v.push_back(num[i]);
        solution(i+1, depth+1);
        v.pop_back();
    }
}

int main() {
    fast_cin;

    while (1){
        cin >> n;
        if (n == 0){
            break;
        }
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            num.push_back(x);
        }
        solution(0, 0);
        cout << endl;
        num.clear();
    }
}
