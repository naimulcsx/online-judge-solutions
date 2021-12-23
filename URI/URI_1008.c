#include <stdio.h>
 
int main() {
  int employee_num, worked_hours;
  float pay_per_hour, salery;
  
  scanf("%d %d %f", &employee_num, &worked_hours, &pay_per_hour);
  
  salery = worked_hours * pay_per_hour;
  
  printf("NUMBER = %d\n", employee_num);
  printf("SALARY = U$ %.2f\n", salery);
  
  return 0;
}
