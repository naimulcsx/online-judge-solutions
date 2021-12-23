#include <stdio.h>

int main(void) {
    int arr[5], count = 0;

    for (int i = 0; i < 5; i++) 
        scanf("%d", &arr[i]);

    for(int i = 0; i<5; i++) 
        if (arr[i] % 2 == 0) 
            count++;

    printf("%d valores pares\n", count);
    return 0;
}
