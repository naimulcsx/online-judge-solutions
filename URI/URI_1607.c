#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char a[100000], b[100000];
        scanf("%s %s", a, b);
        int difference = 0;

        for (int i = 0; i < strlen(a); i++) {
            if (a[i] < b[i]) {
                difference += b[i] - a[i];
            } else if (a[i] == b[i]) {
                difference += 0;
            } else {
                difference += 26 + (b[i] - a[i]);
            }
        }


        printf("%d\n", difference);
    }

    return 0;
}