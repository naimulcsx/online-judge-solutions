#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> vec;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    ll total = 0;

    while(n--) {
        ll l, r;
        cin >> l >> r;
        total += l * r;
        vec.push_back(total);
    }
    
    // handle queries
    while(m--) {
        ll q;
        cin >> q;
        cout << lower_bound(vec.begin(), vec.end(), q) - vec.begin() + 1 << endl;
    }
    return 0;
}
