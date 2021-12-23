#include <stdio.h>
#include <string.h>

int main(void) {
    char dollars[15];
    int cents, k = 0;


    while(scanf("%s %d", dollars, &cents) != EOF) {
        k = 0;
        char ans[50];
        
        for (int i = strlen(dollars); i >= 0; i--) {
            if ((i + 1) % 3 == 1 && i != 0 && i != strlen(dollars)) {
                ans[k] = ',';
                k++;
            }
            ans[k] = dollars[strlen(dollars) - i];
            k++;
        }
        
        ans[k] = '\0';

        printf("$%s.", ans);

        if (cents < 10) {
            printf("0%d", cents);
        } else {
             printf("%d", cents);
        }

        printf("\n");
    }

    return 0;
}