#include <stdio.h>
#include <string.h>

int main(void) {
    char text[500];
    scanf("%[^\n]", text);

    int length = strlen(text);

    if (length <= 140) {
        printf("TWEET\n");
    } else {
        printf("MUTE\n");
    }

    return 0;
}