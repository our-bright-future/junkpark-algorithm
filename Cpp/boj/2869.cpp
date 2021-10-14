#include<bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int A, B, V;
    cin >> A >> B >> V;

    int height = V - A;
    int days = 1;

    days += ceil((double) height / (A - B));

    cout << days << '\n';
}