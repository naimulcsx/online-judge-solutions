#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    string str;
    cin >> n >> str;
    vector<int> f(10);
    for (auto &el: f) cin >> el;

    int first = 0, dig;
    while( first < n ) {
        dig = str[first] - '0';
        if ( f[dig - 1] > dig ) break;
        first++;
    }

    int l = first, r = first;
    while( r < n ) {
        dig = str[r] - '0';
        if ( f[dig - 1] < dig ) break;
        else if (r < n) str[r] = f[dig - 1] + '0';
        ++r;
    }

    cout << str << endl;
    return 0;
}
