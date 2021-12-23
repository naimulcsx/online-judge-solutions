#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int gcd(int a, int b) {
    int r;

    do {
        r = a % b;
        if (r == 0) break;
        
        a = b;
        b = r;
    } while(1);


    return b;
}

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        int a, b, c;

        scanf("%d %d", &a, &b);
        printf("%d\n", gcd( max(a,b), min(a,b) ));
    }

    return 0;
}