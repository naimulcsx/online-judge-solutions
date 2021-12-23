#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++) {
    
        if ( !(i % x == 0 ) ) 
            printf("%d ", i);
        else 
            printf("%d", i);

        if (i % x == 0) 
            printf("\n");
    }

    return 0;
}