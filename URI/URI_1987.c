#include <stdio.h>

int main(void) {
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF) {
        int sum = 0;

        while(y != 0) {
            sum += (y % 10);
            y /= 10;
        }

        if (sum % 3 == 0)
            printf("%d sim\n", sum);
        else
            printf("%d nao\n", sum);

    }

    return 0;
}