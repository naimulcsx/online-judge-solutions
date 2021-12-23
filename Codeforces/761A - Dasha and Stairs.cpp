#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0) cout << "NO" << endl;
    else if (abs(a - b) <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
