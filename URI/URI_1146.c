#include <stdio.h>

int main(void) {
    int x;

    do {
        scanf("%d", &x);

        for (int i = 1; i <= x; i++)
            if (i % x != 0) 
                printf("%d ", i);
            else
                printf("%d\n", i);

    } while (x != 0);

    return 0;
}