#include <stdio.h>

int main(void) {
    int x, y, temp, sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y)  {
        temp = x;
        x = y;
        y = temp;
    }

    for (int i = x; i < y; i++)
        if (i % 2 == 1 || i % 2 == -1 && i != x)
            sum += i;
        

    printf("%d\n", sum);

    return 0;
}