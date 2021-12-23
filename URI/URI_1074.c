#include <stdio.h>

int main(void) {
    int N; 
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++) {
        if (arr[i] == 0)
            printf("NULL\n");
        else if (arr[i] % 2 == 1)
            printf("ODD POSITIVE\n");
        else if (arr[i] % 2 == -1)
            printf("ODD NEGATIVE\n");
        else if (arr[i] > 0 && arr[i] % 2 == 0)
            printf("EVEN POSITIVE\n");
        else if (arr[i] < 0 && arr[i] % 2 == 0)
            printf("EVEN NEGATIVE\n");
    }

    return 0;
}