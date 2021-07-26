#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    float n, sum=0, tmp=0, max=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        sum += tmp;
        if (tmp > max){
            max = tmp;
        }
    }

    cout<<fixed;
    cout.precision(6);
    cout << sum/n/max*100 << "\n";

    return 0;
}
