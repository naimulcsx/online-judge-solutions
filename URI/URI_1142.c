#include <stdio.h>

int main(void) {

    int n, limit;
    scanf("%d", &n);
    limit = 4 * n;

    for (int j = 1; j <= limit; j++) {
        if (j % 4 == 0)
            printf("PUM\n");
        else
            printf("%d ", j);
    }

    return 0;
}