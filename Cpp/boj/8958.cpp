#include <iostream>
#include <string.h>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    int t, correct, ans;
    char s[80];
    cin >> t;
    for (int i = 0; i < t; i++){
        ans = 0;
        correct = 0;
        cin >> s;
        for (int j = 0; j < strlen(s); j++){
            if (s[j] == 'O') {
                correct += 1;
                ans += correct;
            } else {
                correct = 0;
                continue;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
