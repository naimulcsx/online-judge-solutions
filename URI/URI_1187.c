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

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 12; i++) {
            if (j == 0) {
                if (i >= 1 && i <= 10) {
                    sum += N[i][j];
                    count++;
                }
            } else if (j == 1) {
                if (i >= 2 && i <= 9) {
                    sum += N[i][j];
                    count++;
                }
            } else if (j == 2) {
                if (i >= 3 && i <= 8) {
                    sum += N[i][j];
                    count++;
                }
            } else if (j == 3) {
                if ( i >= 4 && i <= 7) {
                    sum += N[i][j];
                    count++;
                }
            } else if (j == 4) {
                if (i >= 5 && i <= 6) {
                    sum += N[i][j];
                    count++;
                }
            }
        }
    }

    avg = sum / count;

    if (opt == 'S')
        printf("%.1f\n", sum);
    else if (opt == 'M')
        printf("%.1f\n", avg);
    

    return 0;
}