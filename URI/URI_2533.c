#include <stdio.h>

int main(void) {
    int n;

    while (scanf("%d", &n) != EOF) {
        int data[n][2], x = 0 , y = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &data[i][0], &data[i][1]);
        }

        for (int i = 0; i < n; i++) {
            x += (data[i][0] * data[i][1]);
            y += data[i][1] * 100;
        }

        printf("%.4f\n", (double) x / y);
    }
    return 0;
}