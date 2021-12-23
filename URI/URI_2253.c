#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_password(char *);

int main(void) {
    char str[100000];

    while(scanf(" %[^\n]", str) != EOF) {

        if (is_valid_password(str))
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }

    return 0;
}


int is_valid_password(char *password) {
    // if srtlen less than 6 or greater that 32
    if (strlen(password) < 6 || strlen(password) > 32) return 0;

    // variables
    int is_valid = 1, upper_letters = 0, lower_letters = 0, numbers = 0, space = 0, invalid_char = 0;

    // iteration
    for (int i = 0; i < strlen(password); i++) {

        if (!isalpha(password[i]) && !isdigit(password[i]))
            invalid_char++;

        if (isupper(password[i]))
            upper_letters++;

        if (islower(password[i])) 
            lower_letters++;

        if (isdigit(password[i]))
            numbers++;
        
        if (isspace(password[i])) 
            space++;
    }

    // check letter counts
    if (upper_letters >= 1 && lower_letters >= 1 && space == 0 && numbers >= 1 && invalid_char == 0)
        return 1;
    else 
        return 0;
}