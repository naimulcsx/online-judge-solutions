#include <stdio.h>

int main(void) {
    double S = 0, x = 1, y = 1;
    
    for (int i = 1; i < 20; i++) {
       S += x / y;
       x+=2;
       y*=2;
    
    }

    printf("%.2lf\n",S);

    return 0;
}