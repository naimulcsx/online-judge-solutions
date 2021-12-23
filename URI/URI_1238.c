#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char string[2][1000];
        char result[1000];
        scanf("%s %s", string[0], string[1]);

        int k = 0;

        if (strlen(string[0]) <= strlen(string[1])) {
            for (int i = 0; i < strlen(string[0]); i++) {
                for (int j= 0; j < 2; j++) {
                    result[k] = string[j][i];
                    k++;
                }
            }

            for (int i = strlen(string[0]); i < strlen(string[1]); i++) {
                result[k] = string[1][i];
                k++;
            }

        } else {

            for (int i = 0; i < strlen(string[1]); i++) {
                for (int j = 0; j < 2; j++) {
                    result[k] = string[j][i];
                    k++;
                }
            }

            for (int i = strlen(string[1]); i < strlen(string[0]); i++) {
                result[k] = string[0][i];
                k++;
            }

        }
    
        result[k] = '\0';
        printf("%s\n", result);
    }
    return 0;
}