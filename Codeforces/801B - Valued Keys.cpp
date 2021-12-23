#include <bits/stdc++.h>
using namespace std;

int marks[26];

int main() {
    ios::sync_with_stdio(false);

    string x, y;
    cin >> x >> y; 
    int sz1 = x.size(), sz2 = y.size();

    if ( sz1 != sz2 ) cout << "-1" << endl;
    else {
        string res = "";
        for (int i = 0; i < sz1; ++i) {
            if ( x[i] == y[i] ) res += x[i];
            else if ( y[i] < x[i] ) res += y[i];
            else {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
