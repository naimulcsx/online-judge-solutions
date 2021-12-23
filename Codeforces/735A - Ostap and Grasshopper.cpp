#include <bits/stdc++.h>
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    string str;
    cin >> n >> k >> str;

    int gpos, tpos;
    for (int i = 0; i < n; ++i) {
        if (str[i] == 'G') gpos = i;
        else if (str[i] == 'T') tpos = i;
    }

    int i = gpos;
    if (tpos < gpos) {
        reverse(begin(str), end(str));
        i = n - 1 - gpos;
    }

        
    bool faced_obstacles = false, dest = false;
    while( i < n ) {
        if (str[i] == '#') faced_obstacles = true;
        else if (str[i] == 'T') {
            dest = true;
            break;
        }
        
        i += k;
    }

    if (!faced_obstacles && dest) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
