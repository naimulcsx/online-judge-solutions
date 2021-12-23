#include <stdio.h>

int main(void) {
    int hours, minutes;

    while(scanf("%d:%d", &hours, &minutes) != EOF) {

        printf("Atraso maximo: ");
        if(hours < 7 || (hours ==7 && minutes == 0)) 
            printf("0\n");
        else
            printf("%d\n", ( (hours + 1) - 8 ) * 60 + minutes);
    }

    return 0;
}