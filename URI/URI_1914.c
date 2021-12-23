#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while(N--) {
        char name_1[100], option_1[20], name_2[100], option_2[20];
        scanf("%s %s %s %s", name_1, option_1, name_2, option_2);
        int x, y;
        scanf("%d %d", &x, &y);

        if ( (x + y) % 2 == 0 ) {
            if (strcmp(option_1, "PAR") == 0) {
                printf("%s\n", name_1);
            } else if (strcmp(option_2, "PAR") == 0) {
                printf("%s\n", name_2);
            }
        } else {
            if (strcmp(option_1, "IMPAR") == 0) {
                printf("%s\n", name_1);
            } else if (strcmp(option_2, "IMPAR") == 0) {
                printf("%s\n", name_2);
            }
        }
    }
    return 0;
}