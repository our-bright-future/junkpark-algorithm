#include <bits/stdc++.h>

using namespace std;

// clang-format off
#define endl "\n"
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// clang-format on

int _find(int x, vector<int> &parent) {
    if (x == parent[x]) {
        return x;
    }
    return (parent[x] = _find(parent[x], parent));
}

void _union(int x, int y, vector<int> &parent) {
    int p_x = _find(x, parent);
    int p_y = _find(y, parent);

    parent[p_x] = min(p_x, p_y);
    parent[p_y] = min(p_x, p_y);
}

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (auto &num : nums) cin >> num;

    int sum = 0;
    for (auto &num : nums) sum += num;
    cout << (int)round((double)sum / n) << endl;

    sort(nums.begin(), nums.end());
    cout << nums[n / 2] << endl;

    int mode;
    int cnt = 0;
    int is_second = 0;
    map<int, int> m;
    for (auto &num : nums) m[num] += 1;
    for (auto &num : nums) {
        if (cnt < m[num]) {
            mode = num;
            is_second = 0;
            cnt = m[num];
        } else if (cnt == m[num] && mode != num && !is_second) {
            mode = num;
            is_second = 1;
        }
    }
    cout << mode << endl;

    cout << nums[n - 1] - nums[0] << endl;
}

// clang-format off
int main() {
    #ifdef JUNKPARK
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio();
    solve();
}
// clang-format on
