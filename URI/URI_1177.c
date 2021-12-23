#include <stdio.h>

int main(void) {
    int N[1000], T, K = 0;
    scanf("%d", &T);

    for (int i = 0; i < 1000; i++) {
        N[i] = K;
        if (K == T - 1) K = 0;
        else K++;
    }

    for (int i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, N[i]);


    return 0;
}