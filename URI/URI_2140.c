#include <stdio.h>

int main(void) {
    while(1) {
        int price, price_paid, change;
        scanf("%d %d", &price, &price_paid);
        if (price == 0 && price_paid == 0) break;

        change = price_paid - price;
        int bill2 = 0, bill5 = 0, bill10 = 0, bill20 = 0, bill50 = 0, bill100 = 0;

        while (change >= 100) {
            if (price_paid - price == 100) 
                break;
            change -= 100;
            bill100++;
        }

        while (change >= 50) {
            change -= 50;
            bill50++;
        }

        while (change >= 20) {
            if (price_paid - price == 20) 
                break;
            change -= 20;
            bill20++;
        }

        while (change >= 10) {
            if (price_paid - price == 10) 
                break;
            change -= 10;
            bill10++;
        }

        while (change >= 5) {
            change -= 5;
            bill5++;
        }

        while (change >= 2) {
            change -= 2;
            bill2++;
        }

        int totalBills = bill2 + bill5 + bill10 + bill20 + bill50 + bill100;

        if (totalBills == 2 && change == 0 && totalBills != 0)
            printf("possible\n");
        else
            printf("impossible\n");

    }

    return 0;
}