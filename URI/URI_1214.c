#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        int length;
        scanf("%d", &length);
        int marks[length], total_marks = 0, above_avg = 0;
        double avg;

        for (int i = 0; i < length; i++) {
            scanf("%d", &marks[i]);
            total_marks += marks[i];
        }

        avg = (double)total_marks / length;
        // printf("%f ", avg);

        for (int i = 0; i < length; i++) {
            if (marks[i] > avg)
                above_avg++;
        }

        double result = (double)above_avg / length * 100;
        printf("%.3f%%\n", result);

    }
    return 0;
}