#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll baseConv(int n, int k) {
    ll sum = 0;
    while(n != 0) {
        sum += (n % k);
        n /= k;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    ll res1 = 0, res2 = n - 2;
    for (int i = 2; i <= n - 1; ++i) res1 += baseConv(n, i);

    int lim = sqrt(res1);
    for (int i = 2; i <= lim; ++i) {
        if (res1 % i == 0 && res2 % i == 0) {
            while( res1 %i == 0 && res2 % i == 0 ) {
                res1 /= i;
                res2 /= i;
            }
        }
    }

    cout << res1 << '/' << res2 << endl;
    return 0;   
}