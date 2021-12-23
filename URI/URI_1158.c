#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while (N != 0) {
        int x, y, sum = 0;
        scanf("%d %d", &x, &y);

        for (int i = x; i < x + y * 2; i++)
            if (i % 2 == 1 || i % 2 == -1) 
                sum += i;
        
        printf("%d\n", sum);

        N--;
    }
}