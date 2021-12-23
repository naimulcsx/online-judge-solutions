#include <stdio.h>

int main() {
    double N[12][12], sum = 0, avg;
    int count = 0;
    char opt;

    scanf("%c", &opt);


    for (int i =0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &N[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i + j <= 10) {
                sum += N[i][j];
                count++;
            }
        
        }
    }

    avg = sum / count;

    if (opt == 'S') {
        printf("%.1f\n", sum);
    } else if (opt == 'M') {
        printf("%.1f\n", avg);
    }

    return 0;
}