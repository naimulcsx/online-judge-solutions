#include <iostream>
#include <cmath>
using namespace std;
int count_lanters(int l, int r, int v);

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int length, v, l, r;
        cin >> length >> v >> l >> r;
        cout << count_lanters(1, length, v) - count_lanters(l, r, v) << endl;
    }
    return 0;
}

int count_lanters(int l, int r, int v) {
    int x = floor( (double) r / v );
    int y = ceil( (double) l / v );
    return max( x - y + 1 , 0 );
}
