#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int s1 = 0, s2 = 0;
    for (int i = 0; i < 2 * n; ++i) {
        cin >> k;
        if (i < n) s1 += k;
        else s2 += k;
    }

    if (s2 > s1) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
