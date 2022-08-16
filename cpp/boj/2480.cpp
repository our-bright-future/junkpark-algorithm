/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2480.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkpark <junkpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:26:08 by junkpark          #+#    #+#             */
/*   Updated: 2022/08/16 22:26:09 by junkpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int a, b, c;

    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << 10000 + a * 1000;
    else if (a == b)
        cout << 1000 + a * 100;
    else if (b == c)
        cout << 1000 + b * 100;
    else if (c == a)
        cout << 1000 + c * 100;
    else
        cout << max(a, max(b, c)) * 100 << endl;
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
