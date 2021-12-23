#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int sum_divisors(int);

int main() {
    printf("PERFECTION OUTPUT\n");

    int n;
    while(1) {
        int sum;
        cin >> n;
        if (n == 0) break;

        sum = sum_divisors(n);

        printf("%5d  ", n);

        if ( sum == n )
            printf("PERFECT\n");
        else if ( sum < n )    
            printf("DEFICIENT\n");
        else
            printf("ABUNDANT\n");
    }

    printf("END OF OUTPUT\n");

    return 0;
}

int sum_divisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2 ; ++i)
        if (n % i == 0)
            sum += i;
    return sum;
}
