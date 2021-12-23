#include <bits/stdc++.h>
using namespace std;

auto main() -> int {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int first = 0, second = 0;
    while(n--) {
        int x, y;
        cin >> x >> y;
        
        
        if ( (x > 0 && y >= 0) || (x > 0 && y <= 0) ) first++;
        else second++;
    }

    if (first <= 1 || second <= 1)  cout << "YES" << endl;
    else  cout << "NO" << endl;
    return 0;
}
