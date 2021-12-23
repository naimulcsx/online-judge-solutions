#include <stdio.h>
#include <string.h>
#include <ctype.h>

int letter_count(char *);
void print_msg(int);

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char input[1000], result[1000];
        scanf(" %[^\n]", input);

        int letters = letter_count(input);
        print_msg(letters);
    }

    return 0;
}

int letter_count(char *str) {
    int count = 0, flags[26] = {0};

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            int letter = str[i] - 97;
            flags[letter] = 1;
        }   
    }

    for (int j = 0; j < 26; j++) {
        if (flags[j] == 1) {
            count++;
        }
    }

    return count;
}

void print_msg(int letters) {
    if (letters == 26) {
        printf("frase completa\n");
    } else if (letters < 26 && letters >= 13) {
        printf("frase quase completa\n");
    } else {
        printf("frase mal elaborada\n");
    }
}