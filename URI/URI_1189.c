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

    for (int i = 7; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i == 7) {
                if (j >= 5 && j <= 6) {
                    sum += N[i][j];
                    count++;
                }
            } else if (i == 8) {
                if (j >= 4 && j <= 7) {
                    sum += N[i][j];
                    count++;
                }
            } else if (i == 9) {
                if (j >= 3 && j <= 8) {
                    sum += N[i][j];
                    count++;
                }
            } else if (i == 10) {
                if ( j >= 2 && j <= 9) {
                    sum += N[i][j];
                    count++;
                }
            } else if (i == 11) {
                if (j >= 1 && j <= 10) {
                    sum += N[i][j];
                    count++;
                }
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