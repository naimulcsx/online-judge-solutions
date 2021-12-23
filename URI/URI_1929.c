#include <stdio.h>

void sort(int *number, int n) {
    int temp = 0, j, i;

    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (number[j] > number[j + 1]) {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int triangle_sides[4], temp;

    // input 4 lengths
    for (int i = 0; i < 4; i++) 
        scanf("%d", &triangle_sides[i]);
    
    // sort the length
    sort(triangle_sides, 4);

    if (triangle_sides[2] < triangle_sides[0] + triangle_sides[1] 
    || triangle_sides[3] < triangle_sides[1] + triangle_sides[2]) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}