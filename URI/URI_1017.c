#include <stdio.h>
#include <math.h>

int main(void) {
    double time, avgspeed, fuel;
    scanf("%lf %lf", &time, &avgspeed);

    fuel = (time * avgspeed) / 12;

    printf("%.3f\n", fuel);

    return 0;
}
