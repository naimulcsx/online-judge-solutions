#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {

        int x, y;
        scanf("%d %d", &x, &y);

        if (x + y == 0)
            printf("PROXYCITY\n");
        else if (x + y == 1)
            printf("P.Y.N.G.\n");
        else if (x + y == 2)
            printf("DNSUEY!\n");
        else if (x + y == 3)
            printf("SERVERS\n");
        else if (x + y == 4)
            printf("HOST!\n");
        else if (x + y == 5)
            printf("CRIPTONIZE\n");
        else if (x + y == 6)
            printf("OFFLINE DAY\n");
        else if (x + y == 7)
            printf("SALT\n");
        else if (x + y == 8)
            printf("ANSWER!\n");
        else if (x + y == 9)
            printf("RAR?\n");
        else if (x + y == 10)
            printf("WIFI ANTENNAS\n");
    }

    return 0;
}