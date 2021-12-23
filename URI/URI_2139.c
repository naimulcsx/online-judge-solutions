#include <stdio.h>

int days_left(int d, int m) {
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    int days_left = 0;

    for(int i = 0; i < 12; i++) {
        if (i >= m - 1) {
            days_left += days[i];
        }
    }

    days_left -= d;
    return days_left;
}

int main() {
    int m, d;
    while(scanf("%d %d", &m, &d) != EOF) {
        
        if (m == 12) {
            if (d == 24) printf("E vespera de natal!\n");
            else if (d == 25) printf("E natal!\n");
            if (d > 25) printf("Ja passou!\n");
        } else {
            printf("Faltam %d dias para o natal!\n", days_left(d, m));
        } 
           
    }

    return 0;
}