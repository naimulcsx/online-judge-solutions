#include <stdio.h>

int main(void) {
    int row, col, ans;
    scanf("%d %d", &row, &col);

    ans = col - row + 1;
    if (ans % 2 == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    return 0;
}