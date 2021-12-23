#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while(N--) {
        int bonus, d_attact, d_defense, d_level, g_attact, g_defense, g_level, d_score, g_score;
        scanf("%d", &bonus);
        scanf("%d %d %d", &d_attact, &d_defense, &d_level);
        scanf("%d %d %d", &g_attact, &g_defense, &g_level);

        d_score = (d_attact + d_defense) / 2;
        if (d_level % 2 == 0) d_score += bonus;

        g_score = (g_attact + g_defense) / 2;
        if (g_level % 2 == 0) g_score += bonus;

        if (d_score > g_score) {
            printf("Dabriel\n");
        } else if (g_score > d_score) {
            printf("Guarte\n");
        } else if (g_score == d_score) {
            printf("Empate\n");
        }
    }


    return 0;
}