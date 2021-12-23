#include <stdio.h>

int main(void) {
    int n, max = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            max = i + 2;
            break;
        }
    }

    printf("%d\n", max);

    return 0;
}