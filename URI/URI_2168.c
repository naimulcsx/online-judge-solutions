#include <stdio.h>

int main(void) {
    int n, size;
    scanf("%d", &n);
    size = n + 1;

    int arr[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &arr[i][j]);


    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 ; j++)
            if ( arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] < 2)
                printf("U");
            else
                printf("S");
    
        printf("\n");
    }

    return 0;
}