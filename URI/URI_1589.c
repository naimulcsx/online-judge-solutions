#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while(N > 0) {
        int R1, R2;
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1 + R2);

        N--;
    }

    return 0;
}