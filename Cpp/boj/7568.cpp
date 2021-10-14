#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;

	cin >> n;
	vector<pair<int, int>> humans(n);
	for (auto& human: humans)
	{
		cin >> human.first;
		cin >> human.second;
	}
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			if (humans[i].first < humans[j].first
				&& humans[i].second < humans[j].second)
				x += 1;
		}
		cout << x + 1 << ' ';
	}
}