#include <bits/stdc++.h>

using namespace std;

int n, m;

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

    cin >> m;
    while (m--){
        int x;
        cin >> x;
        int number = upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);
        cout << number << " ";
    }
}