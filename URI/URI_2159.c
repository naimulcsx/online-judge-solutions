#include <stdio.h>
#include <math.h>

int main(void) {
    double n, min, max;
    scanf("%lf", &n);

    min = n / log(n);
    max = (1.25506) * (n / log(n));

    printf("%.1lf %.1lf\n", min, max);
    return 0;
}