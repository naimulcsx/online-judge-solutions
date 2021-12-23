#include <stdio.h>
using namespace std;
using ll = long long;

ll count(ll n) {
    int c = 0;
    while(1) {
        if (n % 2 == 1) n = 3 * n + 1;
        else n/=2;
        c++;
        if (n == 1) break;
    }
    return c;
}

int main() {
    ll x, y;

    while( scanf("%lld %lld", &x, &y) ) {
        if (x == 0 && y == 0) break;

        if ( x > y ){
            int temp = x;
            x = y;
            y = temp;
        }

        ll max = 0, max_elem, c, n;

        for (int i = x; i <= y; i++){
            c = count(i);
            if (c > max){
                max = c;
                max_elem = i;
            }
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", x, y, max_elem, max);
    }

    return 0;
}
