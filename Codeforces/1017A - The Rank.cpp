#include <stdio.h>
#include <stdlib.h>

void sort(double *, int );

int main(void) {

    int n;
    scanf("%d", &n);
    double numbers[n];

    int k = 0;

    while(n--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        numbers[k] = (double) (a + b + c + d) / (double) 4.0;
        k++;
    }

    double thomasAvg =(double) numbers[0];

    sort(numbers, k);

    int place;

    for (int i = 0; i < k; i++) {
        if (numbers[i] == thomasAvg) {
            place = i + 1;
            break;
        }
    }

    printf("%d\n", place);

    return 0;
}


void sort(double *arr, int length) {
    for (int i = 0; i < length; i++) {
        double min = arr[i], temp;
        int  min_pos = i;

        for (int j = i; j < length; j++) {
            if (arr[j] > min) {
                min = arr[j];
                min_pos = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_pos];
        arr[min_pos] = temp;
    }
}
