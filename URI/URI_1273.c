#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n, arrlen, k = 1;
    
    while(1) {
        scanf("%d", &n);
        if (n == 0) break;
        
        char arr[n][50];
        arrlen = n;

        int max_string_len;
        int spaces_to_print_with[arrlen];
        // get strings
        for (int i = 0; i < arrlen; i++)
            scanf("%s", arr[i]);

        max_string_len = strlen(arr[0]);

        for (int i = 1; i < arrlen; i++) 
            if ( strlen(arr[i]) > max_string_len )
                max_string_len = strlen(arr[i]);

        // make an array containing number of spaces to print with
        for (int i = 0; i < arrlen; i++) {
            int diff = strlen(arr[i]) - max_string_len;
            spaces_to_print_with[i] = abs(diff);
        }

        if (k != 1) printf("\n");

        for (int i = 0; i < arrlen; i++) {
            for (int j = 0; j < spaces_to_print_with[i]; j++) {
                printf(" ");
            }
            printf("%s\n", arr[i]);
        }

        k++;
    }


    return 0;
}