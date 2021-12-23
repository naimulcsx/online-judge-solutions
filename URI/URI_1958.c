#include <stdio.h>

int main()
{
    long double X;
    char arr[120];
    scanf("%Lf", &X);
    sprintf(arr, "%LE", X);

    if (arr[0] != '-') printf("+");
    
    printf("%.4LE\n", X);
    return 0;
}