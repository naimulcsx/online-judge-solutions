#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int i_hour, i_min, f_hour, f_min, h_spend, min_spend;
    scanf("%d %d %d %d", &i_hour, &i_min, &f_hour, &f_min);


    if (f_hour - i_hour > 0) {
        h_spend = f_hour - i_hour;
    } else if (f_hour - i_hour < 0) {
        h_spend = 24 - abs(f_hour - i_hour);
    } else if (f_hour == i_hour) {
        h_spend = 0;

        if (f_min < i_min)
            h_spend = 24;
    }

    if (f_min - i_min > 0)
        min_spend = f_min - i_min;
    else if (f_min - i_min < 0)
        min_spend = 60 - abs(f_min - i_min);
    else if (f_min == i_min)
        min_spend = 0;


    if (h_spend == 0 && min_spend == 0) {
        h_spend = 24;
        min_spend = 0;
    }

    if (f_min < i_min) 
        h_spend--;
    

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_spend, min_spend);

    return 0;
}