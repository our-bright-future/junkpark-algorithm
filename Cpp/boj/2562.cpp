#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int number, max=0, idx;
    for (int i = 0; i < 9; i++){
        cin >> number;
        if (number > max){
            max = number;
            idx = i;
        }
    }
    cout << max << '\n';
    cout << idx+1 << '\n';
    return 0;
}
