#include <stdio.h>

int main(void) {
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    
    int count = 0;
    if (a > 0.00 || b > 0.00 || c > 0.00 || d > 0.00 || e > 0.00 || f > 0.00)
        count++;

    printf("%d valores positivos\n", count);
    return 0;
}
