#include <stdio.h>

int main(void) {
    int N; 
    int n_in = 0, n_out = 0;

    scanf("%d", &N);
    
    int arr[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);


    for (int i = 0; i < N; i++) {
        if (arr[i] >= 10 && arr[i] <= 20)
            n_in++;
        else
            n_out++;
    }

    printf("%d in\n", n_in);
    printf("%d out\n", n_out);

    return 0;
}