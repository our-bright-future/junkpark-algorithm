#include "bits/stdc++.h"
using namespace std;

int n, k;
int total = 0;
vector<int> height;
vector<int> diff;

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        height.push_back(x);
    }
    for (int i = 0; i < height.size()-1; i++){
        diff.push_back(height[i+1] - height[i]);
    }

    sort(diff.begin(), diff.end());
    int ans = 0;
    for (int i = 0; i < n-k; i++){
        ans += diff[i];
    }
    cout << ans;
}