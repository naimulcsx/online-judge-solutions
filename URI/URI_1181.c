#include <stdio.h>

int main() {
    double N[12][12], sum = 0, avg;
    int row;
    char opt;

    scanf("%d %c", &row, &opt);

    for (int i =0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%lf", &N[i][j]);
        
    for (int i = 0; i < 12; i++) 
        sum += N[row][i];
    
    avg = sum / 12.0;

    if (opt == 'S')
        printf("%.1f\n", sum);
    else if (opt == 'M')
        printf("%.1f\n", avg);

    return 0;
}