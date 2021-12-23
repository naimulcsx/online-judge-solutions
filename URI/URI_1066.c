#include <stdio.h>

int main(void) {
    int arr[5], odd = 0, even = 0, positive = 0, negetive = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {

        if (arr[i] % 2 == 0) 
            even++;
        else if (arr[i] % 2 == -1 || arr[i] % 2 == 1)
            odd++;
    

        if (arr[i] > 0)
            positive++;
         else if (arr[i] < 0) 
            negetive++;
            
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negetive);
    
    return 0;
}