#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ( 3 * a <= b ) cout << 0 << endl;
    else cout << 3 * a - b << endl;
    return 0;
}
