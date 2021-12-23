#include <stdio.h>

int main(void) {
    char string[1000];
    int position = 1;
    scanf("%[^\n]", string);

    for (int i = 0; string[i] != ','; i++) {
        printf("%c", string[i]);
        position++;
    }
    printf("\n");
    
    for (int i = position; string[i] != '\0'; i++) {
        printf("%c", string[i]);
    }
    printf("\n");

    
    return 0;
}