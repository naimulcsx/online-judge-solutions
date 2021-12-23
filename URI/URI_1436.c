#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int _case = 1;

    while (n--) {
        int players;
        scanf("%d", &players);
        int age[players];

        for (int i = 0; i < players; i++)
            scanf("%d", &age[i]);
        
        int j = 0, larger, smaller;

        for (int i = 0; i < players; i++) {
            larger = 0;
            smaller = 0;

            for (int k = 0; k < players; k++) {
                if (age[j] > age[k] && k != j) {
                    larger++;
                } else if (age[j] < age[k] && k != j) {
                    smaller++;
                }
            }
            
            if (players % 2 == 0) {
                if (smaller == larger - 1) printf("Case %d: %d\n", _case, age[j]);
            }

            if (larger == smaller) printf("Case %d: %d\n", _case, age[j]);
            j++;
        }

        _case++;
    }
  return 0;
}