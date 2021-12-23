#include <stdio.h>

int main(void) {
    int n, sum;

    do {
        scanf("%d", &n);
        sum = 0;

        if (n != 0) {
            for (int i = n; i < n + 10; i++)
                if (i % 2 == 0)
                    sum += i;

            printf("%d\n", sum);
        }

    } while (n != 0);

    return 0;
}