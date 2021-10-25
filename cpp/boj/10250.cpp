#include <bits/stdc++.h>

using namespace std;

int t;
int w, h, n;

int main(){
    cin >> t;
    while (t--){
        cin >> h >> w >> n;
        int room_number = n / h;
        int height = n % h;
        if (height > 0){
            room_number += 1;
        } else {
            height = h;
        }
        printf("%d%02d\n", height, room_number);
    }


}