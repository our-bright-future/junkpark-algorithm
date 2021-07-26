#include <iostream>

int main() {
    using namespace std;
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    int n, x;
    cin >> n >> x;
    int l[n];
    for (int i = 0; i < n; i++){
        cin >> l[i];
    }
    for (int i = 0; i < n; i++){
        if (l[i] < x){
            cout << l[i] << " ";
        }
    }
    return 0;
}
