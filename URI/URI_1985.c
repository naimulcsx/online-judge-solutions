#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    double total = 0.0;

    while (N > 0) {
        int product_no,  quantity;
        scanf("%d %d", &product_no, &quantity);

        if (product_no == 1001) 
            total += ( 1.50 * quantity );
        else if (product_no == 1002)
            total += ( 2.50 * quantity );
        else if (product_no == 1003)
            total += ( 3.50 * quantity );
        else if (product_no == 1004)
            total += ( 4.50 * quantity );
        else if (product_no == 1005)
            total += ( 5.50 * quantity );
        
        N--;
    }

    printf("%.2f\n", total);
    return 0;
}