#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);
#define endl "\n";

using namespace std;
using ll = long long;

int main() {
    fast_cin;


    int n;
    ll ans = 9223372036854775806;
    cin >> n;
    vector<ll> arr(n); for (auto& a : arr) cin >> a;

    bool is_same = true;
    if (n == 1){
        cout << 0 << endl;
        return 0;
    }
    else {
        ll dif = arr[1] - arr[0];
        for (int i = 1; i < arr.size() - 1; i++){
            if (arr[i+1] - arr[i] != dif) is_same = false;
        }
    }
    if (is_same){
        cout << 0 << endl;
        return 0;
    }


    ll left = arr[0];
    ll right = arr[n-1];
    while (left < right){
        ll a = (left*2 + right) / 3;
        ll b = (left + right*2) / 3;

        ll fa = 0;
        ll fb = 0;

        ll last = a;
        for (int i = 1; i < arr.size(); i++){
            fa += abs(arr[i] - last);
            last += a;
        }

        last = b;
        for (int i = 1; i < arr.size(); i++){
            fb += abs(arr[i] - last);
            last += b;
        }
        if (fa == fb){
            left = a;
            right = b;
        }
        else if (fa < fb){
            right = b-1;
        }
        else {
            left = a+1;
        }
        ans = min(fa, ans);
        ans = min(fb, ans);
    }
//    cout << left << ' ' << right << endl;
    cout << ans << endl;
}