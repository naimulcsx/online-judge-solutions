#include <stdio.h>

int getOption();
void getScore(double *ptr_a, double *ptr_b);
void calculateAverage(double *ptr_a, double *ptr_b);

int main() {
    int opt = 0;

    while(1) {
        if (opt == 0) {
            double a, b;
            getScore(&a, &b);
            calculateAverage(&a, &b);

            int option = getOption();

            if (option == 2)
                break;
        
            else if (option == 1)
                continue;
           
            else if (option != 1 && option != 2) {
                opt = 1;
                printf("novo calculo (1-sim 2-nao)\n");
            }

        } else if (opt == 1) {
            int option = getOption();

            if (option != 1 && option != 2) {
                opt = 1;
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            } 
            
            else if (option == 1 || option == 2) {
                opt = 0;
                continue;
            }
        }
    }

    return 0;
}

void getScore(double *ptr_a, double *ptr_b) {
    do {
        scanf("%lf", ptr_a);

        if (*ptr_a < 0 || *ptr_a > 10)
            printf("nota invalida\n");
    
    } while (*ptr_a < 0 || *ptr_a > 10);

    do {
        scanf("%lf", ptr_b);

        if (*ptr_b < 0 || *ptr_b > 10)
            printf("nota invalida\n");

    } while (*ptr_b < 0 || *ptr_b > 10);
}

void calculateAverage(double *ptr_a, double *ptr_b) {
    double avg = (*ptr_a + *ptr_b) / 2.0;
    printf("media = %.2f\n", avg);
    printf("novo calculo (1-sim 2-nao)\n");
}

int getOption() {
    int option;
    scanf("%d", &option);
    return option;
}