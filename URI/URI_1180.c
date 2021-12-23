#include <stdio.h>

int main(void) {
    int N, lowest = 100000000, positon = 0;
    scanf("%d", &N);
    int X[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);

        if (X[i] < lowest) {
            lowest = X[i];
            positon = i;
        }
    }

    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", positon);
    return 0;
}