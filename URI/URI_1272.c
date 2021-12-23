#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void str_decrypt(char *str, char* target) {
    int k = 0;

    if (islower(str[0])) {
        target[k] = str[0];
        k++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && islower(str[i + 1])) {
            target[k] = str[i + 1];
            k++;
        }
    }

    target[k] = '\0';
}

int main(void) {
    int n, c;
    scanf("%d", &n);
    while ((c = getchar()) != '\n' && c != EOF) {}


    while(n--) {
        char string[100], result[100];
        gets(string);
        str_decrypt(string, result);
        printf("%s\n", result);
    }

    return 0;
}