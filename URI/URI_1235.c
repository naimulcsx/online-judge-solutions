#include <stdio.h>
#include <string.h>

void str_decode(char *str, char* target) {
    int middle = strlen(str) / 2 - 1, m = 0;
    
    for (int i = middle; i >= 0; i--) {
        target[m] = str[i];
        m++;
    }

    target[m] = '\0';
    
    for (int i = strlen(str) - 1; i > middle; i--) {
        target[m] = str[i];
        m++;
    }

    target[m] = '\0';
}

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char input[1000], result[1000];
        scanf(" %[^\n]", input);
        str_decode(input, result);

        printf("%s\n", result);
    }
}