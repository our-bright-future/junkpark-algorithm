#include <bits/stdc++.h>

using namespace std;

bool flag = 0;
vector<vector<int>> graph(9, vector<int>(9));
vector<vector<int>> visited_row(9, vector<int>(9));
vector<vector<int>> visited_col(9, vector<int>(9));
vector<vector<int>> visited_box(9, vector<int>(9));
vector<pair<int, int>> coordinate;

int get_box(int x, int y)
{
	if (x < 3)
	{
		if (y < 3)
			return (0);
		else if (y < 6)
			return (1);
		else
			return (2);
	}
	else if (x < 6)
	{
		if (y < 3)
			return (3);
		else if (y < 6)
			return (4);
		else
			return (5);
	}
	else if (x < 9)
	{
		if (y < 3)
			return (6);
		else if (y < 6)
			return (7);
		else
			return (8);
	}
}

void solution(int n, int depth)
{
	int x = coordinate[n].first;
	int y = coordinate[n].second;
	if (n == depth)
	{
		flag = 1;
		return;
	}
	for (int i = 1; i < 10; i++)
	{
		if (!visited_col[y][i] && !visited_row[x][i]
			&& !visited_box[get_box(x, y)][i])
		{
			visited_col[y][i] = 1;
			visited_row[x][i] = 1;
			visited_box[get_box(x, y)][i] = 1;
			graph[x][y] = i;
			solution(n + 1, depth);
			if (flag)
				return;
			visited_col[y][i] = 0;
			visited_row[x][i] = 0;
			visited_box[get_box(x, y)][i] = 0;
		}
	}
}

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> graph[i][j];
			if (graph[i][j] != 0)
			{
				visited_row[i][graph[i][j]] = 1;
				visited_col[j][graph[i][j]] = 1;
				visited_box[get_box(i, j)][graph[i][j]] = 1;
			}
			else
			{
				coordinate.push_back({ i, j });
			}
		}
	}
	solution(0, coordinate.size());
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << graph[i][j] << ' ';
		}
		cout << '\n';
	}
}