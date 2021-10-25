#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void solution(int n, int m, int depth, int x)
{
	if (depth == m)
	{
		for (auto ele: v)
			cout << ele << ' ';
		cout << '\n';
	}
	else
	{
		for (int i = x; i <= n; i++)
		{
			v.push_back(i);
			solution(n, m, depth + 1, i);
			v.pop_back();
		}
	}
}

int main(void)
{
	int n, m;

	cin >> n >> m;
	solution(n, m, 0, 1);
}