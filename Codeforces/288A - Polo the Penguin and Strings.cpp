#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n == 1 && k == 1) {
        cout << 'a' << endl;
        return 0;
    } else if ( k > n || (k - 2) < 0 ) {
        cout << -1 << endl;
        return 0;
    }

    int upto = n - (k - 2);
    string res = "";
    for (int i = 0; i < upto; ++i) {
        if (i % 2 == 0) res += 'a';
        else res += 'b';
    }

    char l = 'c';
    for ( int i = upto; i < n; ++i ) res += l++;
    cout << res << endl;
    return 0;
}
