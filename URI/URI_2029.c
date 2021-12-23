#include <stdio.h>
#define PI 3.14

int main()
{
    double volume, radius, height, diameter, area;

    while(scanf("%lf%lf", &volume, &diameter) != EOF)
    {
        radius = diameter/2;
        area = PI * radius * radius;
        height = volume/area;
        printf("ALTURA = %.2lf\n", height);
        printf("AREA = %.2lf\n", area);
    }
    
    return 0;
}