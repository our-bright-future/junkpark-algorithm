#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void solution(int n, int m, int depth)
{
	if (depth == m)
	{
		for (auto ele: v)
			cout << ele << ' ';
		cout << '\n';
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			v.push_back(i);
			solution(n, m, depth + 1);
			v.pop_back();
		}
	}
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	solution(n, m, 0);
}