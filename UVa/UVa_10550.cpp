#include <bits/stdc++.h>
using namespace std;

int get_angle(int from, int to, char mode) {
    if (mode == 'C') {
        if (from - to < 0) return (40 + (from - to)) * 9;
        else if (from - to > 0) return (from - to) * 9;
        else return 0;
    }

    // if mode is anti clockwise
    if (to - from < 0) return (40 + (to - from)) * 9;
    else if (to - from > 0) return (to - from) * 9;
    else return 0;
}

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif      

    int s, a, b, c, total;
    while ( cin >> s >> a >> b >> c ) {
        if (s + a + b + c == 0) break;
        total = 0;
        total += 720; 
        // from s to a clockwise
        total += get_angle(s, a, 'C');
        total += 360;
        // from a to b counter clockwise
        total += get_angle(a, b, 'A'); 
        total += get_angle(b, c, 'C');

        cout << total << endl;
    }

    return 0;
}
