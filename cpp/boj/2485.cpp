/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2485.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkpark <junkpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:29:54 by junkpark          #+#    #+#             */
/*   Updated: 2022/05/19 10:42:02 by junkpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bits/stdc++.h"
#define	endl	"\n"
#define	fastio()	cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);


using namespace std;

int	gcd(int a, int b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

void	solution(void)
{
	int	n, g, now, ans;
	vector<int> trees;
	vector<int> diffs;

	cin >> n;
	trees = vector<int>(n);
	diffs = vector<int>(n - 1);
	for (auto &tree: trees) cin >> tree;
	for (int i = 0; i < diffs.size(); i++)
		diffs[i] = trees[i + 1] - trees[i];
	g = gcd(diffs[0], diffs[1]);
	for (auto &diff: diffs) g = gcd(g, diff);
	now = trees[0];
	ans = 0;
	for (auto &diff: diffs)
	{
		ans += (diff - g) / g;
	}
	cout << ans << endl;;
}

int	main(void)
{
	fastio();
	solution();
	return (0);
}
