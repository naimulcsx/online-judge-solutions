#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        int x, y;
        scanf("%d %d", &x, &y);
        char string_y[20];
        int j = 0;

        sprintf(string_y, "%d", y);

        for (int i = 0; i < strlen(string_y); i++) {
            if (y % 10 == x % 10) {
                j++;
                x = x / 10;
                y = y / 10;
            }
        }

        if (strlen(string_y) == j)
            printf("encaixa\n");
        else 
            printf("nao encaixa\n");
        
        
    }
    return 0;
}