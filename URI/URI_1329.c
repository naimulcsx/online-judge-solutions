#include <stdio.h>

int main(void) {
    int n;

    while(1) {
        scanf("%d", &n);
        if (n == 0) break;

        int arr[n], mary = 0, john = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] == 0) mary++;
            else if (arr[i] == 1) john++;
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
    }
    
    return 0;
}