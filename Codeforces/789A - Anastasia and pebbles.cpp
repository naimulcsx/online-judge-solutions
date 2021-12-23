#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int tot = 0;
    for (int i = 1; i <= n; ++i) {
        int m; cin >> m;
        int p = m / k;
        if (m % k != 0) p++;
        tot += p;
    }
    
    cout << tot / 2 + tot % 2 << endl;
    return 0;
}
