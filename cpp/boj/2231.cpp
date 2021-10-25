#include <bits/stdc++.h>

using namespace std;

int get_digit_sum(int n)
{
	int ret;

	ret = n;
	while (n > 0)
	{
		ret += n % 10;
		n /= 10;
	}
	return (ret);
}

void solution(int n)
{
	for (int i = 0; i <= 1000000; i++)
	{
		if (get_digit_sum(i) == n)
		{
			cout << i << '\n';
			return;
		}
	}
	cout << 0 << '\n';
}

int main(void)
{
	int n;

	cin >> n;
	solution(n);
}