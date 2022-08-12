#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void solve()
{
	int n;
	cin >> n;
	vector<int> lines(500 + 1, -1);
	vector<int> lis(500 + 1, 1);

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		lines[x] = y;
	}
	int _max = 0;
	for (int i = 1; i < 500 + 1; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (lines[j] == -1)
				continue;
			if (lines[j] < lines[i])
			{
				lis[i] = max(lis[i], lis[j] + 1);
				_max = max(_max, lis[i]);
			}
			else
				continue;
		}
	}
	cout << n - _max << endl;
}

int main()
{
	fastio();
	solve();
}