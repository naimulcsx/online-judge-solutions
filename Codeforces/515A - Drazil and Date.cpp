#include <bits/stdc++.h>
using namespace std;

int cnt[1010];

int main() {
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;

    a = abs(a);
    b = abs(b);

    if ( c >= (a + b) ) {
        int min = a + b;
        if ((c - min) % 2 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else cout << "No" << endl;
    
    return 0;
}
