#include <iostream>
#include <vector>

using namespace std;

int n, ans = 987654321;
vector<vector<int>> _data(20, vector<int>(20, 0));
vector<int> picked(20);

void solution(int depth, int last)
{
	if (depth == n / 2)
	{
		int start = 0, link = 0;
		for (int i = 0; i < n; i++)
		{
			if (picked[i])
			{
				for (int j = 0; j < n; j++)
				{
					if (picked[j]) start += _data[i][j];
				}
			}
			else
			{
				for (int j = 0; j < n; j++)
				{
					if (!picked[j]) link += _data[i][j];
				}
			}
		}
		ans = min(ans, abs(start - link));
		return ;
	}
	for (int i = last; i < n; i++)
	{
		if (!picked[i])
		{
			picked[i] = true;
			solution(depth + 1, i);
			picked[i] = false;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) cin >> _data[i][j];
	}
	solution(0, 0);
	cout << ans << endl;
}