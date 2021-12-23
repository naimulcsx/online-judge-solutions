#include <stdio.h>

int main(void) {
    float x, y, avg;

    do {
        scanf("%f", &x);
        if (x < 0 || x > 10) printf("nota invalida\n");
    } while (x < 0 || x > 10);

    do {
        scanf("%f", &y);
        if (y < 0 || y > 10) printf("nota invalida\n");
    } while (y < 0 || y > 10);

    avg = (x + y) / 2.0;
    printf("media = %.2f\n", avg);

    return 0;
}