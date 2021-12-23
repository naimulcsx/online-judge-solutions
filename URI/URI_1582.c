#include <stdio.h>

int max_2(int x, int y) {
    return ((x > y) ? x : y);
}

int max_3(int x, int y, int z) {
    return ((x > max_2(y, z)) ? x : max_2(y, z));
}

int gdc(int x, int y, int z) {
    int res = 1;

    for (int i = 2; i <= max_3(x, y, z); i++) {
        if (x % i == 0 && y % i == 0 && z % i == 0)
            res++;
    }
    return res;
}

int main(void) {
    int x, y, z;

    while(scanf("%d %d %d", &x, &y, &z) != EOF) {
        if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y) {
            if (gdc(x, y, z) == 1) {
                printf("tripla pitagorica primitiva\n");
            } else {
                printf("tripla pitagorica\n");
            }
        } else {
            printf("tripla\n");
        }
    }

    return 0;
}