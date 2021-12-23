#include <stdio.h>

int main(void) {
    int arr[4], position;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (arr[i] == 1) {
            position = i + 1;
            break;
        }
    }

    printf("%d\n", position);
    return 0;
}