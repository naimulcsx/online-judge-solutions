#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    #endif

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d1, d2) + min (d3, d1 + d2) + min( max(d1, d2), d3 + min(d1, d2) );
    return 0;
}
