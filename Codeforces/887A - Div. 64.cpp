#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.size(), fi = -1;
    for (int i = 0; i < len; ++i)  {
        if (str[i] == '1') {
            fi = i;
            break;
        }
    }

    if (fi == -1) cout << "no" << endl;
    else {
        int zcnt = 0;
        for (int i = fi + 1; i < len; ++i) if (str[i] == '0') zcnt++;
        if (zcnt >= 6) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
