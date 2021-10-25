#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b;
    while (true){
        cin >> a >> b;
        if (!a && !b){
            break;
        }
        cout << a + b << '\n';
    }
    return 0;
}
