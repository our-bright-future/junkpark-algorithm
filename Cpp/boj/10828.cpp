#include <bits/stdc++.h>

using namespace std;

int n;
string command;
int number;

stack<int> s;

int main(){

    cin.tie(NULL);
    cin.sync_with_stdio(false);
    
    cin >> n;
    while (n--){
        cin >> command;
        if (command == "push"){
            cin >> number;
            s.push(number);
        } else if (command == "top"){
            if (!s.empty()){
                cout << s.top() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if (command == "empty"){
            cout << s.empty() << "\n";
        } else if (command == "size"){
            cout << s.size() << "\n";
        } else if (command == "pop"){
            if (!s.empty()){
                cout << s.top() << "\n";
                s.pop();
            } else {
                cout << -1 << "\n";
            }
        }
    }
}