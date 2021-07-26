#include <iostream>
#include <string.h>

int solution(int n);

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int x;
    cin >> x;
    cout << solution(x) << '\n';


    return 0;
}

int solution(int n){
    if (n < 100){
        return n;
    } else {
        int cnt = 0;
        for (int i = 100; i <= n; i++){
            int first, second, third;
            first = i / 100;
            second = (i % 100) / 10;
            third = (i % 100) % 10;
            if ((first-second) == (second-third)){
                cnt += 1;
            }
        }
        return 99 + cnt;
    }

}
