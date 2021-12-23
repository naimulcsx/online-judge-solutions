#include <stdio.h>
#include <math.h>

int main() {
    int item, quantity;
    scanf("%d %d", &item, &quantity);

    if (item == 1)
        printf("Total: R$ %.2f\n", (float) 4 * quantity);   
    else if (item == 2)
        printf("Total: R$ %.2f\n", (float) 4.5 * quantity);
    else if (item == 3)
        printf("Total: R$ %.2f\n", (float) 5 * quantity);
    else if (item == 4)
        printf("Total: R$ %.2f\n", (float) 2 * quantity);
    else if (item == 5)
        printf("Total: R$ %.2f\n", (float) 1.5 * quantity);

    return 0;
}
