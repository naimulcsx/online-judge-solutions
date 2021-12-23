#include <stdio.h>
#include <stdlib.h>

int main(void) {
    while(1) {
        char input[10];
        scanf("%s", input);
        if (input[0] == '-') break;

        if (input[0] == '0' && input[1] == 'x') {
            long n = strtol(input, NULL, 16);
            printf("%ld\n", n);
        } else {
            int num = atoi(input);
            printf("0x%X\n", num);
        }
    }

    return 0;
}