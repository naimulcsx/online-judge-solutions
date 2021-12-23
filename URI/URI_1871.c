#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_sum(int x, int y) {
    return x + y;
}

int main(void) {
    while(1) {
        int x, y, sum;

        char *buffer = (char *) malloc(sizeof(char) * 100);
        char *result  = (char *) malloc(sizeof(char) * 100);

        scanf("%d %d", &x, &y); //scan the values
        if (x == 0 && y == 0) 
            break;

        
        sum = get_sum(x, y); // calculate the sum
        sprintf(buffer, "%d", sum); // convert sum to string

        int k = 0;
        // interate through the string and filter '0'
        for (int i = 0; i < strlen(buffer); i++) {
            if (buffer[i] == '0') 
                continue;
 
            result[k] = buffer[i]; 
            k++;
        }

        result[k] = '\0';
        printf("%s\n", result);

    }
    return 0;
}