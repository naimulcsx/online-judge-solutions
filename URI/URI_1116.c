#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 0 ; i < N; i++) {
        int x, y;
        float avg;

        scanf("%d %d", &x, &y);
        avg = (float) x / y;

        if (y == 0) 
            printf("divisao impossivel\n");
        else 
            printf("%.1f\n", avg);
    }

    return 0;
}