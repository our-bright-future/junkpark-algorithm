#include "bits/stdc++.h"

#define endl "\n";

using namespace std;

int n, m;
vector<string> v;

int main() {
    cin >> n >> m;
    while (n--){
        string name;
        cin >> name;
        v.push_back(name);
    }
    sort(v.begin(), v.end());
    set<string> s;
    while (m--){
        string name;
        cin >> name;
        int x = upper_bound(v.begin(), v.end(), name) - v.begin();
        int y = lower_bound(v.begin(), v.end(), name) - v.begin();
        if (x - y == 1){
            s.insert(name);
        }
    }
    cout << s.size() << endl;
    for (string name : s){
        cout << name << endl;
    }
}