#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve()
{
	int n, ans = 1;
	cin >> n;
	vector<int> nums(n);
	vector<vector<int>> dp(2, vector<int>(n, 1));
	for (auto &num : nums) cin >> num;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (nums[i] > nums[j])
				dp[0][i] = max(dp[0][j] + 1, dp[0][i]);
			else if (nums[i] < nums[j])
				dp[1][i] = max(dp[0][j] + 1, max(dp[1][j] + 1, dp[1][i]));
			ans = max(ans, max(dp[0][i], dp[1][i]));
		}
	}
	cout << ans << endl;
}

int main()
{
	fastio();
	solve();
}