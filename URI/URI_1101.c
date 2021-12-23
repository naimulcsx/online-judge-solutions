#include <stdio.h>

int main() {
    int x, y, temp, sum = 0;
    
    while(1) {
        scanf("%d %d", &x, &y);

        if(x<=0 || y<=0) break;

        else {
            sum = 0;

            if (x > y) {
                temp = x;
                x = y;
                y = temp;
            }

            for (int i = x; i <=y; i++) {
                printf("%d ", i);
                sum += i;
            }

            printf("Sum=%d\n", sum);
        }
    }


    return 0;
}