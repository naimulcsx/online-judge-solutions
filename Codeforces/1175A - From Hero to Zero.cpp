#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {

    int t;
    scanf("%d", &t);
    while(t--) {
        ll n, k ;
        scanf("%lld %lld", &n, &k);
        
        ll cnt = 0;
        while ( n != 0 ) {
            ll m = n % k;
            if ( m == 0 ) n = n / k, cnt++;
            else n -= m, cnt += m;
        }

        printf("%lld\n", cnt);
    }
    
    return 0;
}
