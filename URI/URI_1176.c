#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    long long int fib[61], first_term = 0, second_term = 1, nextTerm;

    for (int i = 0; i < 61; i++) {
        fib[i] = first_term;
        nextTerm = first_term + second_term;
        first_term = second_term;
        second_term = nextTerm;
    }

    while (N != 0) {
        int x;
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, fib[x]);
        N--;
    }

    return 0;
}