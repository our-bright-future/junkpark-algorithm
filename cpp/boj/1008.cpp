#include <iostream>

int main() {
    using namespace std;
    double a, b;
    cin >> a >> b;

    cout << fixed;
    cout.precision(15);
    cout << a / b << endl;
    return 0;
}
