#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2, t1, t2, k, a1, a2;
    scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);

    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;
    k = min(t1, t2) + abs(t1 - t2) / 2;
    a1 = k / 60;
    a2 = k % 60;

    if ( a1 < 10 ) cout << "0" << a1 << ":";
    else cout << a1 << ":";
    if (a2 < 10) cout << "0" << a2 << endl;
    else cout << a2 << endl;
    return 0;
}
