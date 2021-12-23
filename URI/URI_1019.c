#include <stdio.h>

int main(void) {
    int s;
    scanf("%d", &s);

    printf("%d:", s / 3600);
    s %= 3600;

    printf("%d:", s / 60);
    s %= 60;

    printf("%d\n", s);
    return 0;
}
