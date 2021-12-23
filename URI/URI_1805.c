#include <stdio.h>

int main(void) {
    unsigned long long x, y, sum = 0;
    scanf("%llu %llu", &x, &y);

    sum = ((y * (y + 1) ) / 2) - ((x * (x + 1) ) / 2) + x;

    printf("%llu\n", sum);
    return 0;
}