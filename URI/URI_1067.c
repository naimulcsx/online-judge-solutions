#include <stdio.h>

int main(void) {
    int limit;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
        if (i % 2 == 1) 
            printf("%d\n", i);
    
    return 0;
}
