#include <stdio.h>

long long int factorial(int num) {
    long long sum = 1;
    for (int i = 2; i <= num; i++) {
        sum *= i;
    }
    return sum;
}

int main(void) {
    int x, y;

    while(scanf("%d%d", &x, &y) != EOF) {
        printf("%lld\n", factorial(x) + factorial(y));
    }
    return 0;
}