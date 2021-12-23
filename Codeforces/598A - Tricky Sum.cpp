#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
vector<int> val;

void fill_val() {
    for (int i = 0; i < 30; ++i)
        val.push_back( pow(2, i) );
}

ll sum(ll n) {
    if (n % 2 == 0)
        return (n / 2) * (n + 1);
    return ((n + 1) / 2) * n;
}

int main() {
    int t;
    cin >> t;
    fill_val();

    while(t--) {
        ll n, res;
        cin >> n;
        res = sum(n);

        for ( auto it = val.begin(); it != val.end(); it++ )
            if (*it <= n)
                res -= (*it) * 2;

        cout << res << endl;
    }
    return 0;
}
