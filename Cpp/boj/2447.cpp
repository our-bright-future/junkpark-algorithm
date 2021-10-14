#include <bits/stdc++.h>

using namespace std;

int graph[6561][6561];

void solution(int x, int y, int n)
{
	int tmp = n / 3;
	if (n == 3)
		graph[x + 1][y + 1] = ' ';
	else
	{
		for (int nx = x + tmp; nx < x + 2 * tmp; nx++)
		{
			for (int ny = y + tmp; ny < y + 2 * tmp; ny++)
				graph[nx][ny] = ' ';
		}
		solution(x, y, tmp);
		solution(x, y + 2 * tmp, tmp);
		solution(x, y + tmp, tmp);
		solution(x + tmp, y, tmp);
		solution(x + 2 * tmp, y, tmp);
		solution(x + 2 * tmp, y + tmp, tmp);
		solution(x + 2 * tmp, y + 2 * tmp, tmp);
		solution(x + tmp, y + 2 * tmp, tmp);
	}
}

int main(void)
{
	int n;

	cin >> n;
	solution(0, 0, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (graph[i][j] == 0)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
}