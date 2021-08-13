#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.second < b.second){
        return true;
    }
    else if (a.second == b.second){
        if (a.first < b.first){
            return true;
        }
        return false;
    }
    return false;
}

int main() {
    fast_cin;

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    while (n--){
        int x, y;
        cin >> x >> y;

        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}

