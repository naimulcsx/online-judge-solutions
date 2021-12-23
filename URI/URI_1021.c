#include <stdio.h>

int main() {
    double ammount;

    static int n100, n50, n20, n10, n5, n2;
    static int c100, c50, c25, c10, c5, c1; 

    scanf("%lf" , &ammount );

    while (ammount >= 100.00) {
        ammount -= 100.00;
        n100++;
    }

    while (ammount >= 50.00) {
        ammount -= 50.00;
        n50++;
    }

    while (ammount >= 20.00) {
        ammount -= 20.00;
        n20++;
    }

    while (ammount >= 10.00) {
        ammount -= 10.00;
        n10++;
    }

    while (ammount >= 5.00) {
        ammount -= 5.00;
        n5++;
    }

    while (ammount >= 2.00) {
        ammount -= 2.00;
        n2++;
    }
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    while (ammount >= 1.00) {
        ammount -= 1.00;
        c100++;
    }

    while (ammount >= 0.50) {
        ammount -= 0.50;
        c50++;
    }

    while (ammount >= 0.25) {
        ammount -= 0.25;
        c25++;
    }

    while (ammount >= 0.10) {
        ammount -= 0.10;
        c10++;
    }

    while (ammount >= 0.05) {
        ammount -= 0.05;
        c5++;
    }

    while (ammount >= 0.01) {
        ammount -= 0.01;
        c1++;
    }

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c100);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", c1);

    return 0;
}
