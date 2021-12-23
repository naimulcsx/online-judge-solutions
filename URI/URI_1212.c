#include <stdio.h>
#include <string.h>

int max(int x, int y) {
    return (x >= y) ? x : y;
}

int min(int x, int y) {
    return (x <= y) ? x : y;
}

int main(void) {
    
    while(1) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0) break;
        char string_x[20], string_y[20];

        sprintf(string_x, "%d", x);
        sprintf(string_y, "%d", y);

        int len_x = strlen(string_x);
        int len_y = strlen(string_y);
        int carry = 0;

        for (int i = 0; i < min(len_x, len_y); i++) {
            int prevSum = 0;

            if ((x % 10) + (y % 10) > 9) {
                carry++;
                prevSum = (x % 10) + (y % 10);
            } 
        

            x /= 10;
            y /= 10;


            while(prevSum > 9 && (x % 10) + (y % 10) < 10 && (x % 10) + (y % 10) + 1 > 9) {
                carry++;
                
                x /= 10;
                y /= 10;
            }
        }

        if (carry == 1) {
            printf("%d carry operation.\n", carry);
        } else if (carry > 1) {
            printf("%d carry operations.\n", carry);
        } else if (carry == 0) {
            printf("No carry operation.\n");
        }
        
    }

    return 0;
}