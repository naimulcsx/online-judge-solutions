#include <stdio.h>
#include <math.h>

int calculate_squares(int);

int main(void) {
    int n;

    while(1) {
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", calculate_squares(n));
    }

    return 0;
}

int calculate_squares(int n) {
    int res = 0;

    for (int i = n; i > 0; i--)
        res += pow(i, 2);

    return res;
}