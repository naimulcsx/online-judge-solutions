#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char data[150];
        scanf("%s", data);

        if (strlen(data) != 8 || data[3] != '-') {
            printf("FAILURE\n");
            continue;    
        }

        int count = 0, isValid = 1;

        for (int i = 0; data[i] != '-'; i++) {
            if (isupper(data[i]))
                count++;
        }

        for (int i = 4; i <= 7; i++) {
            if (!isdigit(data[i])) 
                isValid = 0;
        }


        if (count == 3 && isValid) {
            switch(data[7]) {
                case '1':
                case '2':
                    printf("MONDAY\n");
                    break;
                case '3':
                case '4':
                    printf("TUESDAY\n");
                    break;
                case '5':
                case '6':
                    printf("WEDNESDAY\n");
                    break;
                case '7':
                case '8':
                    printf("THURSDAY\n");
                    break;
                case '9':
                case '0':
                    printf("FRIDAY\n");
                    break;
            }
        } else {
            printf("FAILURE\n");
        }
        

    }
    return 0;
}