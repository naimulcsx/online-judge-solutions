#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    double consumedPerPerson = (double) x / y;

    printf("%.2f\n", consumedPerPerson);
    return 0;
}