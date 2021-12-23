#include <stdio.h>

int main(void) {
    double salery, tax;

    scanf("%lf", &salery);

    if (salery >= 0.00 && salery <= 2000.00) {
        printf("Isento\n");
    } else if (salery >= 2000.01 && salery <= 3000.00) {
        salery -= 2000.00;

        tax = salery * .08;
        printf("R$ %.2f\n", tax);
    } else if (salery >= 3000.01 && salery <= 4500.00) {
        salery -= 2000.00;

        tax = 1000.00 * .08;
        tax += (salery - 1000) * .18;

        printf("R$ %.2f\n", tax);
    } else if (salery > 4500.00) {
        salery -= 2000.00;

        tax = 1000.00 * .08; // upto 3000
        tax += 1500.00 * .18; // upto 4500
        tax += (salery - 2500.00) * .28;

        printf("R$ %.2f\n", tax);
    }
    
    return 0;
}