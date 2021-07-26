#include <bits/stdc++.h>

using namespace std;

int n;
string command;
int number;

queue<int> q;

int main(){

    cin.tie(NULL);
    cin.sync_with_stdio(false);

    cin >> n;
    while (n--){
        cin >> command;
        if (command == "push"){
            cin >> number;
            q.push(number);
        } else if (command == "front"){
            if (!q.empty()){
                cout << q.front() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if (command == "empty"){
            cout << q.empty() << "\n";
        } else if (command == "size"){
            cout << q.size() << "\n";
        } else if (command == "pop"){
            if (!q.empty()){
                cout << q.front() << "\n";
                q.pop();
            } else {
                cout << -1 << "\n";
            }
        } else if (command == "back"){
            if (!q.empty()){
                cout << q.back() << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}