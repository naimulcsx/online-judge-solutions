#include <stdio.h>

int main(void) {

  double x, y, z, area;

  scanf("%lf %lf %lf", &x, &y, &z);

  if (x + y > z && y + z > x && x + z > y) {
      printf("Perimetro = %.1f\n", x + y + z);
      
  } else {
      area = ( x +y ) * z / 2;
      printf("Area = %.1f\n", area);
  }
}
