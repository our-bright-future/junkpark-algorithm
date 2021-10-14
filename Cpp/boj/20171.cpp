#include "bits/stdc++.h"

using namespace std;

vector<vector<int>> graph(100001, vector<int>());
vector<int> info(100001, 0);
vector<int> visited(100001, 0);

int dfs(int now)
{
	visited[now] = 1;
	for (int i = 0; i < graph[now].size(); i++)
	{
		if (!visited[graph[now][i]])
		{
			visited[graph[now][i]] = 1;
			info[now] += dfs(graph[now][i]);
		}
	}
	return (info[now]);
}

int main()
{
	int n, k;
	int start;

	cin >> n >> k;
	for (int i = 1; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		info[x] = 1;
		start = x;
	}
	dfs(start);
	int cnt;
	cnt = 0;
	for (int i = 0; i <= n; i++)
	{
		if (info[i] != 0)
			cnt += 1;
	}
	cout << cnt << endl;
}