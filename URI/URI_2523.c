#include <stdio.h>
#include <string.h>

int main(void) {
    char charecters[26];

    while(scanf("%s", charecters) != EOF) {
        int letters;
        scanf("%d", &letters);
        int position[letters];
        char result[letters + 1];
        int count = 0;

        for (int i = 0; i < letters; i++) {
            scanf("%d", &position[i]);
        }

        for (int j = 0; j < letters; j++) {
            for(int i = 0; i < strlen(charecters); i++) {
                if (i + 1 == position[j]) {
                result[count] = charecters[i];
                count++;
                }
            }
            
        }

        result[letters] = '\0';
        printf("%s\n", result);
    }
    return 0;
}