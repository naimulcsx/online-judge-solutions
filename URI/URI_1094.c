#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int rabbit = 0, rat = 0, frog = 0, total = 0;
    int ammount;

    while (N != 0) {
        char name;
        scanf("%d %c", &ammount, &name);

        if (name == 'C')
            rabbit += ammount;
        else if (name == 'R')
            rat += ammount;
        else if (name == 'S')
            frog += ammount;
        N--;
    }

    total = (rabbit + rat + frog);

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2f %%\n", ((double) rabbit / total) * 100.00);
    printf("Percentual de ratos: %.2f %%\n", ((double) rat / total) * 100.00);
    printf("Percentual de sapos: %.2f %%\n", ((double) frog / total) * 100.00);

    return 0;
}