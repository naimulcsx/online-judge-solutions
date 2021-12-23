#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    double totalService = 0.0, 
            totalBlock = 0.0, 
            totalAttack = 0.0;
    
    double totalSuccessfulService = 0.0,
            totalSuccessfulBlock = 0.0,
            totalSuccessfulAttack = 0.0;

    double percentageService,
            percentageAttack,
            percentageBlock;

    while(N--) {
        char name[100];
        scanf("%s", name);

        double service, block, attack, succ_service, succ_block, succ_attack;

        scanf("%lf %lf %lf", &service, &block, &attack);
        scanf("%lf %lf %lf", &succ_service, &succ_block, &succ_attack);

        totalSuccessfulService += succ_service;
        totalSuccessfulAttack += succ_attack;
        totalSuccessfulBlock += succ_block;

        totalService += service;
        totalAttack += attack;
        totalBlock += block;
    }

    percentageService = ( totalSuccessfulService / totalService ) * 100;
    percentageAttack = ( totalSuccessfulAttack / totalAttack ) * 100;
    percentageBlock = ( totalSuccessfulBlock / totalBlock ) * 100;

    printf("Pontos de Saque: %.2f %%.\n", percentageService);
    printf("Pontos de Bloqueio: %.2f %%.\n", percentageBlock);
    printf("Pontos de Ataque: %.2f %%.\n", percentageAttack);

    return 0;
}