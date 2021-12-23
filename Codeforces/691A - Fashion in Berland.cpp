#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int z = 0, o = 0;
    for (int i = 0; i < n; ++i) {
        int inp; cin >> inp;
        if ( inp == 0 ) z++;
        else o++;
    }

    if (n == 1 && o == 1) cout << "YES" << endl;
    else if (n == 1 && z == 1) cout << "NO" << endl;
    else if (z == 1 & o == n - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
