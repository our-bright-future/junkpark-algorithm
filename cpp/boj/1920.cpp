/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1920.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkpark <junkpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:29:54 by junkpark          #+#    #+#             */
/*   Updated: 2022/05/18 15:51:19 by junkpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bits/stdc++.h"
#define	endl	"\n"
#define	fastio()	cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);


using namespace std;

int main(void)
{
	fastio();
	int	n, m;
	vector<int> v;

	cin >> n;
	v = vector<int>(n);
	for (auto &x: v) cin >> x;
	cin >> m;
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		if (binary_search(v.begin(), v.end(), n))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return (0);
}
