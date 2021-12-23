#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char string[1000];
        int force;
        scanf("%s %d", string, &force);

        if (strcmp(string, "Thor") == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }

    }
    return 0;
}