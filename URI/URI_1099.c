#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int arr[N][2];
    int temp;

    for (int i =0; i < N; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    

    for (int i = 0; i < N; i++) {
        int sum = 0;

        if (arr[i][0] > arr[i][1]) {
            temp = arr[i][0];
            arr[i][0] = arr[i][1];
            arr[i][1] = temp;
        }

        for (int j = arr[i][0]; j < arr[i][1]; j++)
            if (j % 2 == 1 && j != arr[i][0])
                sum += j;
            
        printf("%d\n", sum);
    }

    return 0;
}
