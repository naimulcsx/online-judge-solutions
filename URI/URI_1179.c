#include <stdio.h>

int main(void) {
    int par[5], impar[5], par_count = 0, impar_count = 0;
    int N = 1;

    while (N <= 15) {
    
        int x;
        scanf("%d", &x);

        if (x % 2 == 0) {
            par[par_count] = x;
            par_count++;
        } else if (x % 2 == 1 || x % 2 == -1) {
            impar[impar_count] = x;
            impar_count++;
        }

        if (par_count == 5) {
            for (int i = 0; i < 5; i++) 
                printf("par[%d] = %d\n", i, par[i]);
            
            par_count = 0;
        } 

        if (impar_count == 5) {
            for (int i = 0; i < 5; i++) {
                printf("impar[%d] = %d\n", i, impar[i]);
                impar_count = 0;
            }
            continue;
        }

        if (N == 14) break;
        N++;
    }

    for (int i = 0; i < impar_count ; i++) 
        printf("impar[%d] = %d\n", i, impar[i]);

    for (int i = 0; i < par_count ; i++) 
        printf("par[%d] = %d\n", i, par[i]);

    return 0;
}