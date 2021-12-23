#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bigmod(ll n, ll p, ll m) {
    if (p == 0) return 1;
    else if (p % 2 == 0) {
        ll res = bigmod(n, p / 2, m);
        return (res * res) % m;
    }
    return ( (n % m) * bigmod(n, p - 1, m)) % m;
}

ll bin_to_dec(string n) {
    int len = n.length(), p = 0, m = 1000003;
    ll total = 0;
    for (int i = len - 1; i >= 0; --i) {
        int dig = n[i] - '0';
        ll res = (dig * bigmod(2, p, m)) % m;
        total += (res % m);
        p++;
    }
    return (total % m);
}

int main() {
    #ifdef __DEBUG
    freopen("files/output.txt", "w", stdout);
    freopen("files/input.txt", "r", stdin);
    #endif

    string str, res = "";
    cin >> str;

    for (auto &ch: str) {
        if (ch == '>') res += "1000";
        else if (ch == '<') res += "1001";
        else if (ch == '+') res += "1010";
        else if (ch == '-') res += "1011";
        else if (ch == '.') res += "1100";
        else if (ch == ',') res += "1101";
        else if (ch == '[') res += "1110";
        else if (ch == ']') res += "1111";
    }

    cout << bin_to_dec(res) << endl;
    return 0;
}
