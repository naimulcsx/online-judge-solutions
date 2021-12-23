#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    ll res = a + 1;
    for (ll n = a + 2; n <= b; ++n) {
        res = ((res % 10) * n % 10) % 10;
        if (res == 0) break;
    }

    if (a == b) printf("1\n");
    else printf("%lld\n", res % 10);
    return 0;
}
