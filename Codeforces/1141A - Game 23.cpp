#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;

    if ( a == b ) cout << 0 << endl;
    else if ( b % a != 0 ) cout << -1 << endl;
    else {
        int m = b / a, c = 0;
        while( m % 2 == 0 ) m /= 2, c++;
        while( m % 3 == 0 ) m /= 3, c++;
        if (  m != 1  ) cout << -1 << endl;
        else cout << c << endl;
    }

    return 0;
}
