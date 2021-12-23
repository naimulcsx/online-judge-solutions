#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long factorial(long long n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main(void) {

    while(1) {
        char str[100000];
        scanf("%s", str);
        if (strcmp(str, "0") == 0) break;
        printf("%lld\n", factorial(strlen(str)));
    }
    
    return 0;
}