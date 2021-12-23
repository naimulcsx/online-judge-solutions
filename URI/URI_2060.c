#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int arr[N];
    static int multiplesOfTwo, 
        multiplesOfThree, 
        multiplesOfFour, 
        multiplesOfFive;

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);


    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) 
            multiplesOfTwo++;

        if (arr[i] % 3 == 0) 
            multiplesOfThree++;

        if (arr[i] % 4 == 0) 
            multiplesOfFour++;

        if(arr[i] % 5 == 0) 
            multiplesOfFive++;
    }

    printf("%d Multiplo(s) de 2\n", multiplesOfTwo);
    printf("%d Multiplo(s) de 3\n", multiplesOfThree);
    printf("%d Multiplo(s) de 4\n", multiplesOfFour);
    printf("%d Multiplo(s) de 5\n", multiplesOfFive);

    return 0;
}