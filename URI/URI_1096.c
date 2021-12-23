#include <stdio.h>

int main(void) {
    int i = 1, j;

    while (i != 10) {
        if (i % 2 == 1) {
            j = 7;

            for (int k = 0; k < 3; k++) {
                printf("I=%d J=%d\n", i, j);
                j--;
            }
        }
        
        i++;
    }

    return 0;
}