#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string str, res = "";
    cin >> str;

    int i = 0, len = str.length();
    while( i < len ) {
        if ( i + 1 < len && str[i] == '-' && str[i + 1] == '-' ) res += '2',i += 2;
        else if ( i + 1 < len && str[i] == '-' && str[i + 1] == '.') res += '1', i += 2;
        else if ( str[i] == '.' ) res += '0', i++;
    }

    cout << res << endl;
    return 0;
}
