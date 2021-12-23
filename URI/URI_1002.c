#include <stdio.h>
#include <math.h>
 
int main() {
    double radius, area;
    scanf("%lf", &radius);
    
    area = 3.14159 * pow(radius, 2);
    printf("A=%.4f\n", area);
    return 0;
}