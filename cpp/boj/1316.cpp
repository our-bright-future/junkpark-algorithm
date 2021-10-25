#include <bits/stdc++.h>

using namespace std;

int ans = 0;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        vector<bool> visited(26, false);
        int i = 0;
        bool check = true;
        while (i < s.length()) {
            if (!visited[s[i] - 'a']) {
                visited[s[i] - 'a'] = true;
                while (s[i + 1] == s[i]) {
                    if (i + 1 >= s.length()) {
                        break;
                    }
                    i++;
                }
                i++;
            } else {
                check = false;
                break;
            }
        }
        if (check) {
            ans += 1;
        }
    }
    cout << ans << endl;
}
