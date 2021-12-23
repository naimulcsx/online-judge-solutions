#include <stdio.h>

int main(void) {

    int p, j1, j2, r, a, winner;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    if ( ((j1 + j2) % 2 == 0 && p == 1) || ((j1 + j2) % 2 == 1 && p == 0) ) {
        if (r == 1 && a == 0) 
            winner = 1;
        else if (r == 1 && a == 1)
            winner = 2;
        else if (r == 0 && a == 1)
            winner = 1;
        else if (r == 0 && a == 0)
            winner = 1;
        
    } else {
        if (r == 1 && a == 0)
            winner = 1;
        else if (r == 1 && a == 1)
            winner = 2;
        else if (r == 0 && a == 1)
            winner = 1;
        else if (r == 0 && a == 0)
            winner = 2;
    }

    if (winner == 1)
        printf("Jogador 1 ganha!\n");
    else if (winner == 2)
        printf("Jogador 2 ganha!\n");

    return 0;
}