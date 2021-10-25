#include <bits/stdc++.h>

using namespace std;

int n, k;
queue<int> q;

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        q.push(i+1);
    }
    cout << '<';
    while (!q.empty()){
        for (int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (!q.empty()){
            cout << ", ";
        } else {
            cout << ">" << "\n";
        }

    }
}
