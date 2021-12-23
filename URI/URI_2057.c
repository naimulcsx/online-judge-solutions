#include <stdio.h>

int main(void) {
    int x, y, z, total;
    scanf("%d %d %d", &x, &y, &z);
    total = x + y + z;

    if (total > 24) {
        printf("%d\n", total - 24);
    } else if (total < 0) {
        printf("%d\n", 24 + total);
    } else if (total >= 0 && total < 24) {
        printf("%d\n", total);
    } else if (total == 24) {
        printf("%d\n", 0);
    }

    return 0;
}