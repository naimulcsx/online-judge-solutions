#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (i == 0) {
             printf("%d\n", arr[i]);
        } else {
             printf("%d ", arr[i]);
        }
    }


    return 0;
}