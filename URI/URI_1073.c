#include <stdio.h>

int main(void) {
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) 
        if (i % 2 == 0) 
            printf("%d^2 = %d\n", i, i * i);

    return 0;
}