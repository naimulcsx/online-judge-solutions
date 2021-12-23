#include <stdio.h>
#include <string.h>

int main(void) {
    int pass_n, entered = 0, jeep_entered = 0, left = 0, jeep_left = 0;

    while(1) {
        char indicate[10];
        

        scanf("%s", indicate);
        if (strcmp(indicate, "ABEND") == 0) break;
        scanf("%d", &pass_n);


        if (strcmp(indicate, "SALIDA") == 0) {
            entered += pass_n;
            jeep_entered++;
        }

        if (strcmp(indicate, "VUELTA") == 0) {
            left += pass_n;
            jeep_left++;
        }
    }

    printf("%d\n", entered - left);
    printf("%d\n", jeep_entered - jeep_left);
    
    return 0;
}