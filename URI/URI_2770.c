#include <stdio.h>

int main(void) {
    int x, y, m;

    while(scanf("%d %d %d", &x, &y, &m) != EOF) {
        while(m--) {
            int p, q;
            scanf("%d %d", &p, &q);

            if ((p <= x && q <= y) || (p <= y && q <= x)) {
                printf("Sim\n");
            } else {
                printf("Nao\n");
            }
        }
    }

    return 0;
}