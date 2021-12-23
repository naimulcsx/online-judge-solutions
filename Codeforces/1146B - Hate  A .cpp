#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string str;
    cin >> str;

    int a = 0, na = 0;
    for (auto el: str) {
        if (el == 'a') a++;
        else na++;
    }

    if (na & 1) cout << ":(" << endl;
    else {
        int l = str.size(), r = l - 1, k = na / 2;
        string sp = "";
        while( k > 0 ) {
            sp += str[r];
            r--, k--;
        }
        reverse(begin(sp), end(sp));
        
        string spc = "";
        for (int i = 0; i <= r; ++i) {
            if (str[i] != 'a') spc += str[i];
        }
        
        if (sp == spc) for (int i = 0; i <= r; ++i) cout << str[i];
        else cout << ":(";
        cout << endl;
    }

    return 0;
}
