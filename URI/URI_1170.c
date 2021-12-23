#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        float ammount;
        scanf("%f", &ammount); 
        int j = 0;

        while (ammount > 1.00) {
            j++;
            ammount /= 2;
        }

        printf("%d dias\n", j);
    }
  return 0;
}