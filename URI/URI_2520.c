#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;

    while(scanf("%d %d", &n, &m) != EOF) {
        int arr[n][m], x1, y1, x2, y2, pos;
        int i = 0, j = 0;

        // take input
        for(i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &arr[i][j]);
                if (arr[i][j] == 2) {
                x1 = i; y1 = j;
                } else if (arr[i][j] == 1) {
                    x2 = i, y2 = j;
                }
            }
            
        }

        if (y1 == y2) {
            pos = abs(x2 - x1);
        } else if (x1 == x2) {
            pos = abs(y2 - y1);
        } else {
            pos = abs(x2 - x1) + abs(y2 - y1);
        }

        printf("%d\n", pos);
    }

    return 0;
}