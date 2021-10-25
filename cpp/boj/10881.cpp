#include "bits/stdc++.h"

#define endl "\n";

using namespace std;

pair<int, int> one[2], two[2], three[2];

int main() {
    int t;
    cin >> t;
    while(t--){
        for (auto present : {one, two, three}){
            int a, b;
            cin >> a >> b;
            present[0] = make_pair(a, b);
            present[1] = make_pair(b, a);
        }
        int ans = 1e9;

        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                for (int k = 0; k < 2; k++){
                    ans = min(ans, ((one[i].first + two[j].first + three[k].first) * max(one[i].second, max(two[j].second, three[k].second))));
                    ans = min(ans, max(one[i].first, two[j].first + three[k].first) * (one[i].second + max(two[j].second, three[k].second)));
                    ans = min(ans, max(two[j].first, one[i].first + three[k].first) * (two[j].second + max(one[i].second, three[k].second)));
                    ans = min(ans, max(three[k].first, two[j].first + one[i].first) * (three[k].second + max(two[j].second, one[i].second)));
                }
            }
        }
        cout << ans << endl;
    }
}