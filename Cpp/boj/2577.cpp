#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, c, number, ans[10] = {0};
    cin >> a >> b >> c;
    number = a * b * c;
    while (number != 0){
        ans[number%10] += 1;
        number /= 10;
    }
    for (int i = 0; i < 10; i++){
        cout << ans[i] << '\n';
    }
    return 0;
}
