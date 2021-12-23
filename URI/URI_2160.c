#include <stdio.h>
#include <string.h>

int main(void) {
    char text[500];
    scanf("%[^\n]", text);

    if (strlen(text) <= 80) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}