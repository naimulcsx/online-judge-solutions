#include <stdio.h>

int main(void) {

    while(1) {
        unsigned long long ducks, remaining;
        scanf("%llu", &ducks);

        remaining = ducks - 1;

        if (ducks == 0) {
            printf("0\n");
        } else if (ducks != 0 && ducks != -1) {
            printf("%llu\n", remaining);
        }

        if (ducks == -1) break;
    }

    
  return 0;
}