#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> stairs(n);
	vector<vector<int>> dp(2, vector<int>(n, 0));
	for (auto &stair : stairs) cin >> stair;
	dp[0][0] = stairs[0];
	dp[0][1] = stairs[1];
	dp[1][1] = dp[0][0] + stairs[1];
	for (int i = 2 ; i < n ; i++)
	{
		dp[0][i] = max(dp[0][i - 2], dp[1][i - 2]) + stairs[i];
		dp[1][i] = dp[0][i - 1] + stairs[i];
	}
	cout << max(dp[0][n - 1], dp[1][n - 1]);
}