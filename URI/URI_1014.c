#include <stdio.h>

int main(){
    int distance;
    float fuel, fuel_consumption;
    
    scanf("%d %f", &distance, &fuel);
    fuel_consumption = distance / fuel;
    
    printf("%.3f km/l\n", fuel_consumption);
    return 0;
}
