#include <stdio.h>

int main(void) {
    int start_h, end_h, difference;
    scanf("%d %d", &start_h, &end_h);

    if (start_h > 12)
        start_h -= 12;

    if (end_h > 12)
        end_h -= 12;

    difference = start_h - end_h;


    if (difference > 0)
        printf("O JOGO DUROU %d HORA(S)\n", 12 - difference);
    if (difference < 0)
        printf("O JOGO DUROU %d HORA(S)\n", 12 - difference);
    if (difference == 0)
        printf("O JOGO DUROU 24 HORA(S)\n");

    return 0;
}