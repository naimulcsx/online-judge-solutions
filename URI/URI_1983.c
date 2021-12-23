#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int regNum[N], maxReg;
    double note[N], max = 0.0;

    for (int i = 0; i < N; i++) {
        scanf("%d %lf", &regNum[i], &note[i]);
    }

    for (int i = 0; i < N; i++) {
        if ( note[i] > max ) {
            max = note[i];
            maxReg = regNum[i];
        }
    }

    if ( max >= 8.00 ) {
        printf("%d\n", maxReg);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}