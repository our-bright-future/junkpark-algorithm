#include <iostream>


int main() {
    using namespace std;
    int a, b;
    cin >> a;
    cin >> b;

    cout << a*(b%10) << endl;
    cout << a*((b-b%10) % 100 / 10) << endl;
    cout << a*((b-b%100)%1000 / 100) << endl;
    cout << a*b << endl;
    return 0;
}
