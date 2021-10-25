#include "bits/stdc++.h"

using namespace std;

#include <bits/stdc++.h>

using namespace std;

string str;
vector<char> v;


int main(){
    getline(cin, str);
    string UCPC = "UCPC";
    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == UCPC[cnt]) {
            cnt += 1;
        }
        if (cnt == 4){
            break;
        }
    }

    if (cnt == 4) cout << "I love UCPC" << endl;
    else cout << "I hate UCPC" << endl;


}
