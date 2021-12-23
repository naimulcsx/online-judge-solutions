#include <stdio.h>
#include <string.h>

int main() {
    int n;

    while(1) {
        scanf("%d", &n);
        if (n == 0) break;
        int quantity[n]; 
        char food[n][100];

        for (int i = 0; i < n; i++) {
            scanf("%d", &quantity[i]);
            gets(food[i]);
        }

        int vitamin = 0;

        for (int i = 0; i < n; i++) {
           

            if (strcmp(food[i], " suco de laranja") == 0) {
                vitamin += (120 * quantity[i]);
            }

            if (strcmp(food[i], " morango fresco") == 0) {
                vitamin += (85 * quantity[i]);
            }

            if (strcmp(food[i], " mamao") == 0) {
                vitamin += (85 * quantity[i]);
            }

            if (strcmp(food[i], " goiaba vermelha") == 0) {
                vitamin += (70 * quantity[i]);
            }

            if (strcmp(food[i], " manga") == 0) {
                vitamin += (56 * quantity[i]);
            }

            if (strcmp(food[i], " laranja") == 0) {
                vitamin += (50 * quantity[i]);
            }

            if (strcmp(food[i], " brocolis") == 0) {
                vitamin += (34 * quantity[i]);
            }
        }

        if (vitamin > 130) {
            printf("Menos %d mg\n", vitamin - 130);
        } else if (vitamin < 110) {
            printf("Mais %d mg\n", 110 - vitamin);
        } else {
            printf("%d mg\n", vitamin);
        }

        
    }

    return 0;
}