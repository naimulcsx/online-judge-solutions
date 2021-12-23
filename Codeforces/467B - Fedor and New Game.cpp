#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, k;
string bin( int n ) {
    string res = "";
    while( n != 0 ) {
        if (n % 2 == 1) res += '1';
        else res += '0';
        n /= 2;
    }
    
    int l = res.size();
    for (int i = 0; i < 31 - l; ++i) res += '0';
    reverse(res.begin(), res.end());
    return res;
}

bool is_friend(string per, string fedor) {
    int cnt = 0;
    for (int i = 0; i < 31; ++i)
        if (per[i] != fedor[i]) cnt++;

    if (cnt <= k) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;

    int fedor;
    vector<int> arr(m);
    for (auto &el: arr) cin >> el;
    cin >> fedor;
    string fedor_bin = bin(fedor);

    cout << count_if(begin(arr), end(arr), [&](int el) {
        return is_friend( bin(el), fedor_bin );
    }) << endl;
    return 0;
}
