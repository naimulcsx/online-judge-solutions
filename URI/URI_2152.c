#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        printf("%02d:%02d - ", x, y);
        if (z == 1) printf("A porta abriu!\n");
        else if (z == 0) printf("A porta fechou!\n");
    }

    return 0;
}