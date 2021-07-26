#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n-i; j++){
            cout << ' ';
        }
        for (int j = n-i; j < n; j++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}
