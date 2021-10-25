#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    int now_h, now_m;
    float now_UTC;
    string tmp;

    scanf("%2d:%2d UTC%f", &now_h, &now_m, &now_UTC);
    getchar();

    int now_s = 3600*now_h + 60*now_m;

    while (n--){
        float f;
        scanf("UTC%f", &f);
        getchar();

        int s = now_s + (f-now_UTC)*3600;
        if (s < 0){
            s += 24*3600;
        }
        int h = s/3600;
        int m = (s%3600) / 60;
        if (h >= 24){
            h -= 24;
        } else if (h < 0){
            h += 24;
        }
        printf("%02d:%02d\n", h, m);
    }
}
