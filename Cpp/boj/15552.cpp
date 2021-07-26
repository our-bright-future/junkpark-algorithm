#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}
