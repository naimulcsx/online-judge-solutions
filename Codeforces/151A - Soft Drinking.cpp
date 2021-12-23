#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int friends, bottles, per, lime, slice, salt, nl, np;
    cin >> friends >> bottles >> per >> lime >> slice >> salt >> nl >> np;
    cout << min( (bottles * per) / nl, min (lime * slice, salt / np) ) / friends;
    return 0;
}
