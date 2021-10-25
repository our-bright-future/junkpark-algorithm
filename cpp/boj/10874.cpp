#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

int main(){
    cin >> n;
    for (int j = 0; j < n; j++){
        int correct = 0;
        for (int i = 0; i < 10; i++){
            int x;
            cin >> x;
            if (x == arr[i]){
                correct += 1;
            }
        if (correct == 10){
            cout << j+1 << "\n";
        }

        }
    }

}
