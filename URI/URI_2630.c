#include <stdio.h>
#include <string.h>

int findMean(int *ptr) {
    int sum = 0;

    for (int i = 0; i <3; i++) {
        sum += *(ptr + i);
    }

    return (sum / 3);
}


int main(void) {
    int n;
    scanf("%d", &n);
    int count = 1;

    while (n--) {
        char opt[5];
        int data[3], result;
        scanf("%s", opt);

        for (int i = 0; i < 3; i++) {
            scanf("%d", &data[i]);
        }

        

        if ( strcmp(opt, "min") == 0 ) {
            if (data[0] < data[1] && data[0] < data[2]) {
                result = data[0];
            } else if (data[1] < data[0] && data[1] < data[2]) {
                result = data[1];
            } else {
                result = data[2];
            }
        }

        if ( strcmp(opt, "max") == 0 ) {
            if (data[0] > data[1] && data[0] > data[2]) {
                result = data[0];
            } else if (data[1] > data[0] && data[1] > data[2]) {
                result = data[1];
            } else {
                result = data[2];
            }
        }

        if ( strcmp(opt, "mean") == 0 ) {
            result = findMean(data);
        }

        if ( strcmp(opt, "eye") == 0 ) {
            result = (double) (data[0] * 0.3 + data[1] * 0.59 + 0.11 * data[2]);
        }
        
        printf("Caso #%d: %d\n", count, result);
        count++;
    }

    return 0;
}