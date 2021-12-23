#include <stdio.h>

int main(void) {
    int n, alcohol = 0, gasoline = 0, diesel = 0;
    
    do {
        scanf("%d", &n);

        if (n > 4) scanf("%d", &n);
        if (n == 1) alcohol++;
        if (n == 2) gasoline++;
        if (n == 3) diesel++;

    } while (n != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}