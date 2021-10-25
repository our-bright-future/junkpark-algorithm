#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> v;
string s;

bool compareWith(string a, string b){
    if (a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

int main(){
    cin >> n;
    while (n--){
        cin >> s;
        if (find(v.begin(), v.end(), s) == v.end())
            v.push_back(s);
    }
    sort(v.begin(), v.end(), compareWith);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}