#include <stdio.h>

int main(void) {
    int X[10];

    for (int i = 0; i < 10; i++) 
        scanf("%d", &X[i]);

    for (int i = 0; i < 10; i++) 
        if (X[i] == 0 || X[i] < 0) 
            X[i] = 1;

    for (int i = 0; i < 10; i++) 
        printf("X[%d] = %d\n", i , X[i]);

    return 0;
}