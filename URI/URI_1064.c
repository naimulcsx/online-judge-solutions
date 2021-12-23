#include <stdio.h>

int main(void) {
    float arr[6], sum = 0;
    int positives = 0;

    for (int i = 0; i < 6; i++) 
        scanf("%f", &arr[i]);
    
    for (int i = 0; i < 6; i++) {
        if (arr[i] > 0) {
            positives++;
            sum += arr[i];
        }
    }

    printf("%d valores positivos\n", positives);
    printf("%.1f\n", sum / positives);

    return 0;
}