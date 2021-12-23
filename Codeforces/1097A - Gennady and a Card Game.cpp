#include <bits/stdc++.h>
using namespace std;

int main() {
    string c, str;
    cin >> c;
    bool flag = false;
    while( cin >> str ) {
        if ( str[0] == c[0] || str[1] == c[1] ) 
            flag = true;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl; 
    return 0;
}
