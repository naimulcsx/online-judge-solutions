#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 2 && b < 2) {
        cout << 0 << endl;
        return 0;
    }

    int cnt = 1;
    while( true )  {
        if ( a < b ) {
            a += 1;
            b -= 2;
        } else {
            b += 1;
            a -= 2;
        }

        if (a <= 0 || b <= 0) break;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
