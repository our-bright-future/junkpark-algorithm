/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2752.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkpark <junkpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:10:37 by junkpark          #+#    #+#             */
/*   Updated: 2022/08/16 22:12:12 by junkpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define endl "\n";

void fastio() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
}

void solve() {
    vector<int> v(3);

    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    for (auto &x : v) cout << x << ' ';
}

// clang-format off
int main() {
    #ifdef JUNKPARK
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio();
    solve();
}
// clang-format on
