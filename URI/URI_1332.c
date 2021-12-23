#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char string[10];
        scanf("%s", string);
        int length = strlen(string);
        int one = 0, two = 0, three = 0;

        if (length == 3) {
            if ( (string[0] == 'o' && string[1] == 'n') || (string[0] == 'o' && string[2] == 'e') || (string[1] == 'n' && string[2] == 'e') ) {
                printf("1\n");
            } else {
                printf("2\n");
            }

        } else if (length == 5) {
            printf("3\n");
        }
    }

    return 0;
}