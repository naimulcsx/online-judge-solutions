#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;

    double a, b, min_price = numeric_limits<double>::max();
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if ( (a / b) < min_price )
            min_price = a / b;
    }

    cout << fixed << setprecision(8) << min_price * m << endl;
    return 0;
}
