#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    int t, a, b;
    cin >> t;
    for (int i = 1; i < t+1; i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << '\n';
    }
    return 0;
}
