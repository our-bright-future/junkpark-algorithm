#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);

using namespace std;
using ll = long long;

double get_dist(double Ax, double Ay, double Bx, double By){
    double ret = sqrt(pow(Bx-Ax, 2) + pow(By-Ay, 2));
    return ret;
}

int main() {
    fast_cin;

    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    double ans = 1e9;
    ll i = 1e3;
    while (i--){
        double MINHO_Ax = (Ax*2 + Bx)/3;
        double MINHO_Ay = (Ay*2 + By)/3;
        double GANGHO_Ax = (Cx*2 + Dx)/3;
        double GANGHO_Ay = (Cy*2 + Dy)/3;
        double A_dist = get_dist(MINHO_Ax, MINHO_Ay, GANGHO_Ax, GANGHO_Ay);

        double MINHO_Bx = (Ax + Bx*2)/3;
        double MINHO_By = (Ay + By*2)/3;
        double GANGHO_Bx = (Cx + Dx*2)/3;
        double GANGHO_By = (Cy + Dy*2)/3;
        double B_dist = get_dist(MINHO_Bx, MINHO_By, GANGHO_Bx, GANGHO_By);

        if (B_dist > A_dist){
            Bx = MINHO_Bx;
            By = MINHO_By;
            Dx = GANGHO_Bx;
            Dy = GANGHO_By;
            ans = min(ans, A_dist);
        }
        else if (B_dist < A_dist){
            Ax = MINHO_Ax;
            Ay = MINHO_Ay;
            Cx = GANGHO_Ax;
            Cy = GANGHO_Ay;
            ans = min(ans, B_dist);
        }
        else {
            Ax = MINHO_Ax;
            Ay = MINHO_Ay;
            Cx = GANGHO_Ax;
            Cy = GANGHO_Ay;
            Bx = MINHO_Bx;
            By = MINHO_By;
            Dx = GANGHO_Bx;
            Dy = GANGHO_By;
            ans = min(ans, B_dist);
        }
    }
    cout << fixed;
    cout.precision(10);
    cout << ans << endl;
}