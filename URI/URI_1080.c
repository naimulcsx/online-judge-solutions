#include <stdio.h>

int main(void) {
    int arr[100], highest = 0, position ;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] > highest) {
            highest = arr[i];
            position = i + 1;
        }
    }

    printf("%d\n", highest);
    printf("%d\n", position);

    return 0;
}