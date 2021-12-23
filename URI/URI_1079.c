#include <stdio.h>

int main(void) {
    int N; 
    scanf("%d", &N);

    for(int i = 1; i <=N; i++) {
        float arr[3], avg;

        scanf("%f %f %f", &arr[0], &arr[1], &arr[2]);
        avg = (arr[0] * 2.0 + arr[1] * 3.0 + arr[2] * 5.0 ) / 10.0;

        printf("%.1f\n", avg);
    }

    return 0;
}