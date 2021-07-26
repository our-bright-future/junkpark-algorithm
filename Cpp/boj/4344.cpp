#include <iostream>
#include <string.h>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    float c, n, sum, cnt = 0, scores[1000] = {0};
    cin >> c;
    for (int i = 0; i < c; i++){
        sum = 0;
        cnt = 0;
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> scores[j];
            sum += scores[j];
        }
        float avg = (float)sum / n;
        for (int j = 0; j < n; j++){
            if (scores[j] > avg){
                cnt += 1;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << cnt/n*100 << "%\n";
    }
    return 0;
}
