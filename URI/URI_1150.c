#include <stdio.h>

int main(void) {
    int X, Z, sum, count = 0;
    scanf("%d", &X);

    do {
        scanf("%d", &Z);
    } while (Z <= X);

    sum = 0;

    if (X > 0) {
        sum = 0;
        while (sum < Z) {
            sum = sum + X;
            X++;
            count++;
        }
    } else {
        sum = X;
        while (sum < Z) {
            sum = sum + X;
            X++;
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}