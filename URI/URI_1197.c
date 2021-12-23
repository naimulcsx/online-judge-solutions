#include <stdio.h>

int main(void) {
    int x, t;
    
    while(scanf("%d %d", &x, &t) != EOF) {
        printf("%d\n", 2 * x * t);
    }

    return 0;
}