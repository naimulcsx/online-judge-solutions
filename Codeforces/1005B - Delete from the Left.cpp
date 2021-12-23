#include <bits/stdc++.h>
using namespace std;

int cnt1[26], cnt2[26];
int main() {
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    for (auto el: a) cnt1[el - 'a']++;
    for (auto el: b) cnt2[el - 'a']++;

    int r1, r2;
    r1 = a.size() - 1;
    r2 = b.size() - 1;

    while( r1 >= 0 && r2 >= 0 ) {
        if ( a[r1] != b[r2] ) break;
        r1--, r2--;
    }

    cout << r1 + r2 + 2 << endl;
    return 0;
}

