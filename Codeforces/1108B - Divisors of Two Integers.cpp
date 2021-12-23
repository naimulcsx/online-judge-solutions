#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b) {
    ll gcd = __gcd(a, b);
    return (a / gcd) * b;
}

vector<int> get_divs(int n) {
    vector<int> res;
    for (int i = 1; i * i <= n; ++i) {
        if ( i * i == n )  res.push_back(i);
        else if (n % i == 0) res.push_back(i), res.push_back(n / i);
    }
    return res;
}

int cnt[10010];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        cnt[k]++;
        mx = max(mx, k);
    }
    vector<int> divs = get_divs(mx);
    for (auto el: divs) cnt[el]--;

    vector<int> left;
    for (int i = 0; i < 10010; ++i) 
        if (cnt[i] != 0) left.push_back(i);


    int res = 1;
    for (auto el: left) res = lcm(res, el);
    cout << mx << ' ' << res << endl;
    return 0;
}
