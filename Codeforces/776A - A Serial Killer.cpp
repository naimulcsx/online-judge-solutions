#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int t;
    string a, b;
    cin >> a >> b >> t;

    cout << a << ' ' << b << endl;
    while( t-- ) {
        string n, rep;
        cin >> n >> rep;
        if (a == n) a = rep;
        else b = rep;
        cout << a << ' ' << b << endl;
    }
    return 0;
}
