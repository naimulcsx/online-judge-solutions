#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);    
    int q;
    cin >> q;
    while(q--) {
        ll s, a, b, c, t;
        cin >> s >> a >> b >> c;
        t = (s / (a * c));
        cout << (t * a) + (t * b) + (s - (t * a * c)) / c << endl;
    }
    return 0;
}
