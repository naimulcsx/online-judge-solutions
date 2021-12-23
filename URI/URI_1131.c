#include <stdio.h>

int main(void) {
    int inter_win = 0, gremio_win = 0, draw = 0, games = 0;
    

    while(1) {
        int x, y, option;
        scanf("%d %d", &x, &y);

        if (x < y)
            gremio_win++;
        else if (x > y)
            inter_win++;
        else
            draw++;
    

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &option);

        games++;

        if (option == 1)
            continue;
        else if (option == 2)
            break; 
    }

    printf("%d grenais\n", games);
    printf("Inter:%d\n", inter_win);
    printf("Gremio:%d\n", gremio_win);
    printf("Empates:%d\n", draw);
    

    if (gremio_win == inter_win)
        printf("Nao houve vencedor\n");
    else if (gremio_win > inter_win)
        printf("Gremio venceu mais\n");
    else
        printf("Inter venceu mais\n");

    return 0;
}