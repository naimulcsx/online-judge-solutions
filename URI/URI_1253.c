#include <stdio.h>

void ceaser(char *str, int offset) {
    int pos;
    for (int i = 0; str[i] != '\0'; i++) {
        pos = str[i] - (offset % 26);
        if (pos < 65)
            str[i] = (str[i] + 26) - (offset % 26);
        else 
            str[i] = pos;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char string[100];
        int offset;
        scanf("%s", string);
        scanf("%d", &offset);

        ceaser(string, offset);
        printf("%s\n", string);
    }


    return 0;
}