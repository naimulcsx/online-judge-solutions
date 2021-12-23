#include <stdio.h>
#include <math.h>

unsigned long long sum_calculate(int x) {
    unsigned long long sum  = 0;

    for (int i = 0; i < x; i++)
        sum += (unsigned long long) pow(2, i);

    return sum;
}

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        int x;
        scanf("%d", &x);
        unsigned long long sum = sum_calculate(x);
        printf("%llu kg\n", sum / 12000);
    }

    return 0;
}