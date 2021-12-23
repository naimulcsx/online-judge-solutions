#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);
    double fib = (pow ( ( ( 1.0 + sqrt(5)) / 2  ), n) - pow ( ( ( 1.0 - sqrt(5)) / 2  ), n))  / sqrt(5);

    printf("%.1f\n", fib);
    
    return 0;
}