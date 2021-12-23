#include <stdio.h>

int main(void) {
    int n, starts_with_higher = 0, peaks = 0, valleys = 0;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    if (arr[0] > arr[1]) {
        starts_with_higher = 1;
        peaks = 1;
    } else {
        valleys = 1;
    }


    for (int i = 0; i < n - 1; i++) {
       if (starts_with_higher) {
           if ((i + 1) % 2 == 1 && arr[i] > arr[i+1]) {
               valleys++;
           } else if ((i + 1) % 2 == 0 && arr[i] < arr[i+1]) {
               peaks++;
           }
       } else {
           if ((i + 1) % 2 == 1 && arr[i] < arr[i+1]) {
               peaks++;
           } else if ((i + 1) % 2 == 0 && arr[i] > arr[i+1]) {
               valleys++;
           }
       }     
    }

    int calculated_peaks, calculated_valleys;

    if (starts_with_higher) {
        calculated_peaks = n - n/2;
        calculated_valleys = n - calculated_peaks;
    } else {
        calculated_valleys = n - n/2;
        calculated_peaks = n - calculated_valleys;
    }

    if (calculated_peaks == peaks && calculated_valleys == valleys) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}