#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;

int main(){
    cin >> n >> m;
    while (n--){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = 0;

    for (int i = 0; i < v.size() - 2; i++){
        for (int j = i+1; j < v.size() - 1; j++){
            for (int k = j+1; k < v.size(); k++){
                if (v[i] + v[j] + v[k] <= m && (v[i]+v[j]+v[k]) > ans){
                    ans = v[i] + v[j] + v[k];
                }
            }
        }
    }
    cout << ans;
}