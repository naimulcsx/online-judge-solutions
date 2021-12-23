#include <stdio.h>

long long r(long long, long long);
long long b(long long, long long);
long long c(long long, long long);

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        int x, y, p, q;
        scanf("%d %d", &x, &y);

        p = (long long) x;
        q = (long long) y;

        long long r_ans = r(p,q);
        long long b_ans = b(p,q);
        long long c_ans = c(p,q);

        if (r_ans > b_ans && r_ans > c_ans)
            printf("Rafael ganhou\n");
        else if (b_ans > r_ans && b_ans > c_ans)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }

    return 0;
}


long long r(long long x, long long y) {
    return (9 * x * x + y * y);
}

long long b(long long x, long long y) {
    return (2 * x * x + 25 * y * y);
}

long long c(long long x, long long y) {
    return (-100 * x + y * y * y);
}