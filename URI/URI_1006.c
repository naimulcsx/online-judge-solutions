#include <stdio.h>
 
int main() {
    double a , b, c, avg;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    avg = (a*2.0 + b*3.0 + c*5.0)/(2.0+3.0+5.0);
    printf("MEDIA = %.1f\n", avg);
}
