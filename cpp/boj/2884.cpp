#include <iostream>


int main() {
    using namespace std;
    int h, m;
    cin >> h >> m;
    if (m >= 45){
        m -= 45;
    } else {
        m = m + 15;
        if (h >= 1){
            h -= 1;
        } else {
            h += 23;
        }
    }
    cout << h << ' ' << m << endl;
    return 0;
}
