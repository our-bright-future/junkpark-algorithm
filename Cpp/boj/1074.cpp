#include "bits/stdc++.h"

#define fast_cin \
    cin.tie(NULL); \
    cin.sync_with_stdio(false);
#define endl "\n";

using namespace std;

int len;
int N, r, c;

int solution(int x, int y, int len, int start){
    int tmp = len / 2;
    if (len == 1){
        return start;
    }
    if (r < x + tmp && c < y + tmp){
        return solution(x, y, tmp, start);
    }
    if (r >= x + tmp && c < y + tmp){
        return solution(x + tmp, y, tmp, start + (tmp * tmp * 2));
    }
    if (r < x + tmp && c >= y + tmp){
        return solution(x, y + tmp, tmp, start + (tmp * tmp * 1));
    }
    if (r >= x + tmp && c >= y + tmp){
        return solution(x + tmp, y + tmp, tmp, start + (tmp * tmp * 3));
    }
    return 0;
}

int main() {
    fast_cin;

    cin >> N >> r >> c;
    len = pow(2, N);
    cout << solution(0, 0, len, 0) << endl;

}