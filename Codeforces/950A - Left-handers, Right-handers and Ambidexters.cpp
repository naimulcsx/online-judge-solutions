#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int l, r, a;
    cin >> l >> r >> a;

    if ( a <= abs(l - r) )
        cout << (min(l, r) + a) * 2 << endl;
    else 
        cout << (l + r + a) / 2 * 2 << endl;

    return 0;
}
