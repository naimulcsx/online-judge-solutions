#include <stdio.h>

int elementsNumber(int n);

int main(void) {
    int n, count = 1;

    while (scanf("%d", &n) != EOF) {
        int numCount;

        if (n == 0) {
            numCount = 1;
        } else {
            numCount = elementsNumber(n) + 1;
        }
    
        
        int series[numCount];
        if (numCount == 1) {
            printf("Caso %d: %d numero\n", count, numCount);
        } else {
            printf("Caso %d: %d numeros\n", count, numCount);
        }
        

        if (numCount == 1) {
            printf("0");
        } else {
            printf("0 ");
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {

                if (i == n && j == n) {
                      printf("%d", i);
                } else {
                      printf("%d ", i);
                }
                
            }
        }
        printf("\n\n");
        count++;
    }

    return 0;
}

int elementsNumber(int n) {
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    return sum;
}