#include <stdio.h>

int main() {
    double a, b, c, temp;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    } 

    // a < c has to be checked imediately after checking a < b
    // because if we check b < c then, there's a possibility to 
    // swap c with b

    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a >= b + c) 
        // if we cant form a triangle with given a, b, c
        printf("NAO FORMA TRIANGULO\n");

    else {

        // When we ca form a triangle with given a, b, c
        // we need to check what type of triangle it is
        // based on the co-ordinates

        if (a * a == b * b + c * c)
            printf("TRIANGULO RETANGULO\n");
    
        if (a * a > b * b + c * c)
            printf("TRIANGULO OBTUSANGULO\n");

        if (a * a < b * b + c * c)
            printf("TRIANGULO ACUTANGULO\n");
        
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        
        if ( (a == b && c != b) || (b == c && a != c) || (c == a && b != c) )
            printf("TRIANGULO ISOSCELES\n");  
    }

    return 0;
}