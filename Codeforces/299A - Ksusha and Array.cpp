#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<int, int> marks;
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el, marks[el] = true;

    int gcd = arr[0];
    for (auto el: arr) gcd = __gcd(gcd, el);

    if ( marks[gcd] ) cout << gcd << endl;
    else cout << -1 << endl;

    return 0;
}
