#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int r, d, s;
    cin >> r >> d >> s;

    int cnt = 0;
    for (int i = 1; i <= s; ++i) {
        int x, y, sr, cr = abs(r - d);
        cin >> x >> y >> sr;
        double dis = sqrt( (x * x) + (y * y) );
        if ( dis >= (cr + sr) && dis + sr <= r ) cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}