#include <stdio.h>

int main(void) {
    int i = 1, j = 7;

    while (i != 10) {
        if (i % 2 == 1) {
            for (int k = 0; k < 3; k++) {
                printf("I=%d J=%d\n", i, j);
                j--;
            }

            j += 5;
        }

        i++;
    }
    return 0;
}