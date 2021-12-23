#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n) {
    // Corner cases
    if (n <= 1)  return 0;
    if (n <= 3)  return 1;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return 0;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i+2) == 0)
           return 0;

    return 1;
}

char *itoa(int i, char* s, int dummy_radix) {
    sprintf(s, "%d", i);
    return s;
}

int main(void) {
    int n;

    while(scanf("%d", &n) != EOF) {
        char snum[100];
        int digits[strlen(snum)], isSuper = 1;
        itoa(n, snum, 10);

        for (int i = 0; snum[i] != '\0'; i++) {
            digits[i] = (int) snum[i] - 48;
        }

        if (isPrime(n)) {
            for (int i = 0; i < strlen(snum); i++) {
                if (!isPrime(digits[i])) isSuper = 0;
            }

            if (isSuper)
                printf("Super\n");
            else
                printf("Primo\n");


        } else {
            printf("Nada\n");
        }
    }


    return 0;
}
