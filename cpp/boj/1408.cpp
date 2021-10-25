#include <bits/stdc++.h>

using namespace std;

int n;
int h1, m1, s1;
int h2, m2, s2;
int ans_h, ans_m, ans_s;

int main(){
    scanf("%2d:%2d:%2d", &h1, &m1, &s1);
    scanf("%2d:%2d:%2d", &h2, &m2, &s2);

    ans_h = h2 - h1;
    ans_m = m2 - m1;
    ans_s = s2 - s1;

    if (ans_s < 0) {
        ans_m -= 1;
        ans_s += 60;
    }

    if (ans_m < 0) {
        ans_h -= 1;
        ans_m += 60;
    }

    if (ans_h < 0){
        ans_h += 24;
    }

    printf("%02d:%02d:%02d", ans_h, ans_m, ans_s);

}