#include <bits/stdc++.h>
using namespace std;

int h, m, k = 1440;

int main() {
    scanf("%d:%d", &h, &m);
    m++;

    while( k-- ) {
        m = m % 60;
        if (m == 0) h++, h = h % 24;
        string res = "", rev;

        if (h < 10) res += "0";
        res += to_string(h) + ":";
        
        if (m < 10) res += "0";
        res += to_string(m);

        rev = res;
        reverse(begin(rev), end(rev));

        if ( rev == res ) {
            cout << res << endl;
            return 0;
        }

        ++m;
    }
    
    return 0;   
}
