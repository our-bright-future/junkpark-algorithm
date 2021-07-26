#include <bits/stdc++.h>

using namespace std;

int n;
string command;
int number;

deque<int> q;

int main(){

    cin.tie(NULL);
    cin.sync_with_stdio(false);

    cin >> n;
    while (n--){
        cin >> command;
        if (command == "push_front"){
            cin >> number;
            q.push_front(number);
        } else if (command == "push_back"){
            cin >> number;
            q.push_back(number);
        } else if (command == "pop_front"){
            if (!q.empty()){
                cout << q.front() << "\n";
                q.pop_front();
            } else {
                cout << -1 << "\n";
            }

        } else if (command == "pop_back") {
            if (!q.empty()){
                cout << q.back() << "\n";
                q.pop_back();
            } else {
                cout << -1 << "\n";
            }

        } else if (command == "size") {
            cout << q.size() << "\n";
        } else if (command == "empty") {
            cout << q.empty() << "\n";
        } else if (command == "front") {
            if (!q.empty()){
                cout << q.front() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if (command == "back") {
            if (!q.empty()){
                cout << q.back() << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}
