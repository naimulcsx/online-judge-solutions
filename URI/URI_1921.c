#include <stdio.h>

int main(void) {
    long long N, sides;
    scanf("%lld", &N);

    if (N >= 3) {
        sides = ( N * (N-3) ) / 2;
        printf("%lld\n", sides);
    }

    return 0;
}
