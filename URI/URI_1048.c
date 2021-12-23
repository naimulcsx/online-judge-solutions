#include <stdio.h>

int main(void) {
    float salery, increased_salery;
    int increase_percentage;
    scanf("%f", &salery);

    if (salery >= 0.00 && salery <= 400.00) {
        increase_percentage = 15;
        increased_salery = salery + salery * 0.15;
        printf("Novo salario: %.2f\n", increased_salery);
        printf("Reajuste ganho: %.2f\n", salery * 0.15);
        printf("Em percentual: %d %%\n", increase_percentage);
    } 
    
    else if (salery >= 400.01 && salery <= 800.00) {
        increase_percentage = 12;
        increased_salery = salery + salery * 0.12;
        printf("Novo salario: %.2f\n", increased_salery);
        printf("Reajuste ganho: %.2f\n", salery * 0.12);
        printf("Em percentual: %d %%\n", increase_percentage);
    } 
    
    else if (salery >= 800.01 && salery <= 1200.00) {
        increase_percentage = 10;
        increased_salery = salery + salery * 0.10;
        printf("Novo salario: %.2f\n", increased_salery);
        printf("Reajuste ganho: %.2f\n", salery * 0.10);
        printf("Em percentual: %d %%\n", increase_percentage);
    } 
    
    else if (salery >= 1200.01 && salery <= 2000.00) {
        increase_percentage = 7;
        increased_salery = salery + salery * 0.07;
        printf("Novo salario: %.2f\n", increased_salery);
        printf("Reajuste ganho: %.2f\n", salery * 0.07);
        printf("Em percentual: %d %%\n", increase_percentage);
    } 
    
    else if (salery > 2000.00) {
        increase_percentage = 4;
        increased_salery = salery + salery * 0.04;
        printf("Novo salario: %.2f\n", increased_salery);
        printf("Reajuste ganho: %.2f\n", salery * 0.04);
        printf("Em percentual: %d %%\n", increase_percentage);
    }

    return 0;
}