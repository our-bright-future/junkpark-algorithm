#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> v;
int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i ++){
        cout << v[i] << "\n";
    }
}