#include <stdio.h>

int main(void) {
    int tea;
    scanf("%d", &tea);
    int teaGuess[5], count = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &teaGuess[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (teaGuess[i] == tea) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}