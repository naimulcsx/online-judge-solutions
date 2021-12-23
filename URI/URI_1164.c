#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while(N != 0) {

        int n, sum = 0;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
            if (n % i == 0 && i != n) 
                sum += i;

        if (sum == n)
            printf("%d eh perfeito\n", n);
        else
            printf("%d nao eh perfeito\n", n);
    
        N--;
    }
    
    return 0;
}