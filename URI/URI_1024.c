#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_encrypt(char *str);
void str_reverse(char *str);

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char input[1000];
        scanf(" %[^\n]", input);
        str_encrypt(input);
        printf("%s\n", input);
    }

    return 0;
}


void str_encrypt(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if ( isupper(str[i]) || islower(str[i]) ) {
            str[i] = str[i] + 3;
        }
    }

    int iteration_length = strlen(str) % 2 == 0 ? strlen(str) / 2 : strlen(str) / 2 + 1;

    for (int i = 0; i < iteration_length; i++) {
        str[i] = str[i] - 1;
    }

    str_reverse(str);
}

void str_reverse(char *str) {
    int i = 0, j = strlen(str) - 1;

    while (i <= j) {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}