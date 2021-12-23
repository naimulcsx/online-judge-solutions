#include <stdio.h>
 
int main() {
    char seller_name[50];
    double salery, product_sold, bonus;
    
    scanf("%s", seller_name);
    scanf("%lf", &salery);
    scanf("%lf", &product_sold);
    
    bonus = product_sold * 0.15;
    salery += bonus;
    
    printf("TOTAL = R$ %.2lf\n", salery);
    return 0;
}
