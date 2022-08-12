/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15686.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkpark <junkpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:29:54 by junkpark          #+#    #+#             */
/*   Updated: 2022/05/19 10:12:47 by junkpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bits/stdc++.h"
#define	endl	"\n"
#define	fastio()	cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);


using namespace std;

int						n, m, info, dist, result, ans;
vector<vector<int>>		map;
vector<pair<int, int>>	houses;
vector<pair<int, int>>	chickens;
vector<pair<int, int>>	comb_chickens;
vector<int>				chicken_dist;

void	solution(int depth, int idx)
{
	int	dist, tmp;

	tmp = 0;
	if (depth == m)
	{
		for (auto &house: houses)
		{
			dist = INT32_MAX;
			for (auto &chicken: comb_chickens)
			{
				dist = min(abs(house.first - chicken.first)
							+ abs(house.second - chicken.second), dist);
			}
			tmp += dist;
		}
		ans = min(ans, tmp);
	}
	else
	{
		for (int i = idx; i < chickens.size(); i++)
		{
			comb_chickens.push_back(chickens[i]);
			solution(depth + 1, i + 1);
			comb_chickens.pop_back();
		}
	}
}

int	main(void)
{
	fastio();

	ans = INT32_MAX;
	cin >> n >> m;
	for (int r = 0; r < n; r++)
	{
		for (int c = 0; c < n; c++)
		{
			cin >> info;
			if (info == 1)
				houses.push_back({r, c});
			else if (info == 2)
				chickens.push_back({r, c});
		}
	}
	solution(0, 0);
	cout << ans << endl;
	return (0);
}
