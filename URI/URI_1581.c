#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int count;
        scanf("%d", &count);
        char data[count][1000];

        for (int i = 0; i < count; i++)
            scanf("%s", data[i]);

        
        int is_identical = 1;

        for (int i = 1; i < count; i++) {
            if (strcmp(data[0], data[i]) != 0) {
                is_identical = 0;
                break;
            }
        }

        if (is_identical) {
            printf("%s\n", data[0]);
        } else {
            printf("ingles\n");
        }

    }
    
    return 0;
}
