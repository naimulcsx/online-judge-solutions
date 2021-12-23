#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countNewStringLength(char *);
void formatOutput(char *, char *);

int main(void) {
    char string[100];
    char *output;

    while(gets(string) != NULL) {
        output = (char *) malloc(sizeof(char) * countNewStringLength(string));
        
        formatOutput(string, output);
        printf("%s\n", output);
    }

    return 0;
}

void formatOutput(char *str, char *target) {
    int k = 0, l = 1, m = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '*') {
            l++;

            if (l % 2 == 0) {
                target[k] = '<'; k++;
                target[k] = 'b'; k++;
                target[k] = '>'; k++;
            } else {
                target[k] = '<'; k++;
                target[k] = '/'; k++;
                target[k] = 'b'; k++;
                target[k] = '>'; k++;
            }
            
            
        } else if (str[i] == '_') {
            m++;

            if (m % 2 == 0) {
                target[k] = '<'; k++;
                target[k] = 'i'; k++;
                target[k] = '>'; k++;
            } else {
                target[k] = '<'; k++;
                target[k] = '/'; k++;
                target[k] = 'i'; k++;
                target[k] = '>'; k++;
            }
        
        } else {
            target[k] = str[i];
            k++;
        }
    }

    target[k] = '\0';
}


int countNewStringLength(char *str) {
    int length = strlen(str), tags = 0;

    for (int i = 0; str[i] != '\0'; i++) 
        if (str[i] == '*' || str[i] == '_') 
            tags++;

    length += (tags / 2) * 7;
    length -= tags;
    return length + 1;
}