#include <bits/stdc++.h>
#define what_is(x) cout << #x << "x is: " << x << endl;
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = (int) s.size(), mid = len / 2;
    int i = 0, j = (int) s.size() - 1, unmatched = 0;

    while( i < mid + (len % 2) ) {
        if (s[i] != s[j]) unmatched++;
        ++i, --j;
    }
    
    if (unmatched == 0 && (int) s.size() % 2 == 1) cout << "YES" << endl;
    else if (unmatched == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
