#include "bits/stdc++.h"

using namespace std;

int visited[1000001];

int main() {
    int n;
    cin >> n;
    queue<int> q;
    q.push(n);
    while (!q.empty()){
        int x = q.front(); q.pop();
        if (x % 3 == 0 && visited[x/3] == 0){
            visited[x/3] = visited[x] + 1;
            q.push(x/3);
        }

        if (x % 2 == 0 && visited[x/2] == 0){
            visited[x/2] = visited[x] + 1;
            q.push(x/2);
        }

        if (x > 1 && visited[x-1] == 0){
            visited[x-1] = visited[x] + 1;
            q.push(x-1);
        }
    }

    cout << visited[1] << endl;

}