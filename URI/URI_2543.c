#include <stdio.h>

int main(void) {
    int N, uni_code;

    while(scanf("%d %d", &N, &uni_code) != EOF) {
        int data[N][2], count = 0 ;

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &data[i][0], &data[i][1]);
        }

        for (int i = 0; i < N; i++) {
            if (data[i][0] == uni_code && data[i][1] == 0)  {
                count++;
            }
        }

        printf("%d\n", count);
    }
}