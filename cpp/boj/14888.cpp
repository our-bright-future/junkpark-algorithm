#include <iostream>
#include <vector>

using namespace std;

int n, _max = -1000000001, _min = 1000000001;
vector<int> nums(11), ops(4);

void	solution(int depth, int num)
{
	if (depth == n)
	{
		_max = max(_max, num);
		_min = min(_min, num);
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (ops[i] != 0)
		{
			ops[i] -= 1;
			if (i == 0) solution(depth + 1, num + nums[depth]);
			else if (i == 1) solution(depth + 1, num - nums[depth]);
			else if (i == 2) solution(depth + 1, num * nums[depth]);
			else solution(depth + 1, num / nums[depth]);
			ops[i] += 1;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> nums[i];
	for (auto &op : ops) cin >> op;
	solution(1, nums[0]);
	cout << _max << '\n';
	cout << _min << '\n';
}