#include <stdio.h>

int main(void) {
    int N;

    while (scanf("%d", &N) != EOF) {
        int nums[N], impeachment = 0;
        double x = (double) N * (2.0 / 3.0);

        for (int i = 0; i < N; i++) {
            scanf("%d", &nums[i]);
        }

        
        for (int i = 0; i < N; i++) {
            if (nums[i] == 1) {
                impeachment++;
            }
        }
        // printf("%f\n", x);
        //         printf("%d\n", impeachment);
        if ((double) impeachment >= x ) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }


    return 0;
}