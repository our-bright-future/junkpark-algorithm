#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);

using namespace std;
using ll = long long;


int n, m;
vector<int> v;

void solution(int x, int depth){
    if (depth == m){
        for (auto ele : v){
            cout << ele << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = x; i <= n; i++){
        v.push_back(i);
        solution(i+1, depth+1);
        v.pop_back();
    }

}

int main() {
    fast_cin;

    cin >> n >> m;
    solution(1, 0);
}