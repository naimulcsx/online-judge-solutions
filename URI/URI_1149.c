#include <stdio.h>

int main(void) {
    int a, n,  sum = 0;
    scanf("%d", &a);

    do {
        scanf("%d", &n);

        for (int i = a; i < a + n; i++)
            sum+= i;
        
    } while(n < 0 || n == 0);

    printf("%d\n", sum);
    return 0;
}