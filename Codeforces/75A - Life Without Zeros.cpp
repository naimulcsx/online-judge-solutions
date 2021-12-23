#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int conv(string s) {
    string res = "";
    for (auto el: s) if (el != '0') res += el;
    return atoi(res.c_str());
}

int main() {
    ios::sync_with_stdio(false);
    int x, y, z;
    cin >> x >> y;
    z = x + y;

    if ( conv(to_string(x)) + conv(to_string(y)) == conv(to_string(z)) ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
