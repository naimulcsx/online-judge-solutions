#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);
int count_divisors(int);

int main(void) {
    int t;
    scanf("%d", &t);

    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", count_divisors( gcd(a, b) ) );
    }

    return 0;
}

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else 
        return gcd(b, a % b);
}

int count_divisors(int n) {
    int divisors = 0;
    for (int i = 1; i * i <= n; i++) {
        if ( i * i == n )
            divisors += 1;
        else if (n % i == 0)
            divisors += 2;
    }
    return divisors;
}
