#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    int d, m, y;
    string s;
    vector<pair<pair<int, int>, pair<int, string>>> v;

    for (int i = 0; i < n; i++){
        cin >> s >> d >> m >> y;
        v.push_back(make_pair(make_pair(y, m), make_pair(d, s)));
    }
    sort(v.begin(), v.end());

    cout << v[n-1].second.second << "\n";
    cout << v[0].second.second << "\n";

}