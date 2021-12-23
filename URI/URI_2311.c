#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while (N--) {
        char name[100];
        scanf("%s", name);
        double diffculty, scores[7];
        scanf("%lf", &diffculty);

        double addition = 0.0,
                largest = 0.0,
                smallest = 10000.0,
                result;

        for (int i = 0; i < 7; i++) {
            scanf("%lf", &scores[i]);
        }

        for (int i = 0; i < 7; i++) {
            addition += scores[i];

            if (scores[i] > largest) {
                largest = scores[i];
            }

            if (scores[i] < smallest) {
                smallest = scores[i];
            }
        }

        result = (addition - largest - smallest) * diffculty;

        printf("%s %.2f\n", name, result);

    }

    return 0;
}