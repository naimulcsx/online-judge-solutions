#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while (N != 0) {
        int PA, PB;
        double G1, G2;
        int PeopleIncreasingPerYear_A,
            PeopleIncreasingPerYear_B,
            count = 0, i = 0;

        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while (PA <= PB) {
            // calculate people increasing per year
            PeopleIncreasingPerYear_A = (int) ( (G1 * PA) / 100.00 );
            PeopleIncreasingPerYear_B = (int) ( (G2 * PB) / 100.00 );

            PA += PeopleIncreasingPerYear_A;
            PB += PeopleIncreasingPerYear_B;
            
            count++;
            i++;

            if (count > 100) 
                break;

        }

        if (count <= 100) 
            printf("%d anos.\n", count);
        else 
            printf("Mais de 1 seculo.\n");

        N--;
    }

    return 0;
}