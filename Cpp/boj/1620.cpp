#include "bits/stdc++.h"

using namespace std;

int visited[1000001];

int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    map<string, int> dic_string;
    map<int, string> dic_int;

    for (int i = 1; i <= N; i++){
        string str;
        cin >> str;
        dic_string.insert({str, i});
        dic_int.insert({i, str});
    }

    for (int i = 0; i < M; i++){
        string str;
        cin >> str;
        if ('0' <= str[0] && str[0] <= '9'){
            cout << dic_int[stoi(str)] << "\n";
        } else {
            cout << dic_string[str] << "\n";
        }
    }
}