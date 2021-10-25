#include <iostream>
#include <stdio.h>


int main() {
    using namespace std;
    int n, ans=0;
    cin >> n;
    for (int i = 1; i < n+1; i++){
        ans += i;
    }
    cout << ans << endl;
    return 0;
}
