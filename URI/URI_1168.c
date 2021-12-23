#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char number[1000];
        int total = 0;
        scanf("%s", number);


        for (int i = 0; number[i] != '\0'; i++) {

            if (number[i] == '0') total += 6;
            else if (number[i] == '1') total += 2;
            else if (number[i] == '2') total += 5;
            else if (number[i] == '3') total += 5;
            else if (number[i] == '4') total += 4;
            else if (number[i] == '5') total += 5;
            else if (number[i] == '6') total += 6;
            else if (number[i] == '7') total += 3;
            else if (number[i] == '8') total += 7;
            else if (number[i] == '9') total += 6;

        }

        printf("%d leds\n", total);
    }

    return 0;
}