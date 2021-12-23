#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while (N != 0) {
        int n, count = 0;
        scanf("%d", &n);

        for (int i = 1; i <= n/2; i++)
            if (n % i == 0) 
                count++;

        if (count == 2) 
            printf("%d eh primo\n", n);
        else
            printf("%d nao eh primo\n", n);
        
        N--;
    }
    
  return 0;
}