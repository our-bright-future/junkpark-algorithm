#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<pair<int, int>, string>> d;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age;
        cin >> name;
        d.push_back(make_pair(make_pair(age, i), name));
    }

    sort(d.begin(), d.end());

    for (int i = 0; i < n; i++){
        cout << d[i].first.first << ' ' << d[i].second << '\n';
    }
}