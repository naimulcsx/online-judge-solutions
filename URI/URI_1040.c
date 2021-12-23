#include <stdio.h>

int main() {
    double n1, n2, n3, n4, n5, avg;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    avg = ( 2 * n1 + 3 * n2 + 4 * n3 + 1 * n4 ) / 10.0;

    if (avg > 7) {
        printf("Media: %.1f\n", avg);
        printf("Aluno aprovado.\n");
    } 
    
    else if (avg < 5) {
        printf("Media: %.1f\n", avg);
        printf("Aluno reprovado.\n");
    } 
    
    else if (avg >= 5.00 && avg <= 6.9) {
        printf("Media: %.1f\n", avg);
        printf("Aluno em exame.\n");
        scanf("%lf", &n5);
        printf("Nota do exame: %.1f\n", n5);
        avg = (avg + n5) / 2.0;

        if (avg >= 5) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", avg);
    }
    
    return 0;
}
