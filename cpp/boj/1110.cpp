#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, target, cnt=0;
    cin >> n;
    target = n%10 * 10 + (n/10 + n%10)%10;
    cnt += 1;
    while (target != n){
        target = target%10 * 10 + (target/10 + target%10)%10;
        cnt += 1;
    }
    cout << cnt << '\n';
    return 0;
}
