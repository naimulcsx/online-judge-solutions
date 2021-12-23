#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int val, i = 0;
    for (auto &ch: s) {
        val = ch - '0';
        if (9 - val < val)
            if ( !(i == 0 && ch =='9') )
                ch = (9 - val) + '0';

        i++;
    }

    cout << s << endl;
    return 0;
}
