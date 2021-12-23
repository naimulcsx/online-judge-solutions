#include <stdio.h>

int main(void) {
    int balance, hundred = 0, fifty = 0, 
    twenty = 0, ten = 0, five = 0, two = 0, one = 0;

    scanf("%d", &balance);
    printf("%d\n", balance);
        
    while (balance >= 100) {
        balance -= 100;
        hundred++;
    }

    while (balance >= 50) {
        balance -= 50;
        fifty++;
    }

    while (balance >= 20) {
        balance -= 20;
        twenty++;
    }

    while (balance >= 10) {
        balance -= 10;
        ten++;
    }

    while (balance >= 5) {
        balance -= 5;
        five++;
    }

    while (balance >= 2) {
        balance -= 2;
        two++;
    }

    while (balance >= 1) {
        balance -= 1;
        one++;
    }

    printf("%d nota(s) de R$ 100,00\n", hundred);
    printf("%d nota(s) de R$ 50,00\n", fifty);
    printf("%d nota(s) de R$ 20,00\n", twenty);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", five);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);
    
    return 0;
}
