#include <stdio.h>

int main(void) {
    int width, length, type1 = 0, type2 = 0;
    scanf("%d %d", &width, &length);

    type2 += 2*(width - 1);
    type2 += 2*(length - 1);

    for (int i = 0; i < (2 * width - 1); i++) {
        if ( (i + 1) % 2 == 1) {
            type1 += length;
        } else {
            type1 += (length - 1);
        }
    }

    printf("%d\n", type1);
    printf("%d\n", type2);

    return 0;
}