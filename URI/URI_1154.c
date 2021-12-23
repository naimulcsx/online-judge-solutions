#include <stdio.h>

int main(void) {
    int age, x = 0, sum = 0;
    float avg;

    while(1) {
    
        scanf("%d", &age);

        if (age > 0) {
            sum += age;
            x++;
        }
        
        if (age < 0) break;
    }

    avg = (float) sum / x;
    printf("%.2f\n", avg);

    return 0;
}