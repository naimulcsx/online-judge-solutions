#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int y, b, r;
    cin >> y >> b >> r;

    int red_needed = r, blue_needed = red_needed - 1, yellow_needed = blue_needed - 1;
    
    while( blue_needed > b || yellow_needed > y ) {
        red_needed--;
        blue_needed--;
        yellow_needed--;
    }

    cout << red_needed + blue_needed + yellow_needed << endl;
    return 0;
}
