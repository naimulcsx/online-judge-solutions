#include <bits/stdc++.h>
using namespace std;
// 156,454,195,642

int main() {
    int n1, n2, n3;
    int g, p, b;
    cin >> n1 >> n2 >> n3 >> g >> p >> b;

    if (g < n1) cout << "NO" << endl;
    else {
        g -= n1;
        if ( g + p < n2 ) cout << "NO" << endl;
        else {
            int left = g + p + b - n2;
            if (left < n3) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}