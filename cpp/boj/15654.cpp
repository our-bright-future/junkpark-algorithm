#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false); \
    cout.tie(NULL);

using namespace std;
using ll = long long;


int n, m;
vector<int> v;
vector<int> nums;
bool visited[10001];

void solution(int depth){
    if (depth == m){
        for (auto ele : v){
            cout << ele << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++){
        if (!visited[nums[i]]){
            v.push_back(nums[i]);
            visited[nums[i]] = true;
            solution(depth+1);
            v.pop_back();
            visited[nums[i]] = false;
        }
    }
}

int main() {
    fast_cin;

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());

    solution(0);
}