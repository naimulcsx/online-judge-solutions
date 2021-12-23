#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while (N > 0) {
        char name[10000];
        scanf("%s", name);
        int nameLength = strlen(name);
        printf("%.2f\n", nameLength / 100.00);

        N--;
    }
    return 0;
}