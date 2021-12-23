#include <stdio.h>

int main(void) {

    int n, j = 0;

    scanf("%d", &n);
    char roman[100];

    while (n >= 900) {
        roman[j] = 'C';
        j++;
        roman[j] = 'M';
        j++;
        n -= 900;
    }

    while (n >= 500) {
        roman[j] = 'D';
        j++;
        n -= 500;
    }

    while(n >= 400) {
        roman[j] = 'C';
        j++;
        roman[j] = 'D';
        j++;
        n -= 400;
    }

    while (n >= 100) {
        roman[j] = 'C';
        j++;
        n -= 100;
    }

    while(n >= 90) {
        roman[j] = 'X';
        j++;
        roman[j] = 'C';
        j++;
        n -= 90;
    }

    while (n >= 50) {
        roman[j] = 'L';
        j++;
        n -= 50;
    }

    while (n >= 40) {
        roman[j] = 'X';
        j++;
        roman[j] = 'L';
        j++;
        n -= 40;
    }

    while (n >= 10) {
        roman[j] = 'X';
        j++;
        n -= 10;
    }

    switch(n) {
        case 1: roman[j] = 'I'; j++; break;
        case 2: roman[j] = 'I'; j++; roman[j] = 'I'; j++; break;
        case 3: roman[j] = 'I'; j++;  roman[j] = 'I'; j++;  roman[j] = 'I'; j++; break;
        case 4: roman[j] = 'I'; j++;  roman[j] = 'V'; j++; break;
        case 5: roman[j] = 'V'; j++; break;
        case 6: roman[j] = 'V'; j++;  roman[j] = 'I'; j++;  break;
        case 7: roman[j] = 'V'; j++;  roman[j] = 'I'; j++;  roman[j] = 'I'; j++; break;
        case 8: roman[j] = 'V'; j++;  roman[j] = 'I'; j++;  roman[j] = 'I'; j++; roman[j] = 'I'; j++; break;
        case 9: roman[j] = 'I'; j++; roman[j] = 'X'; j++; break;
    }


    roman[j] = '\0';
    printf("%s\n", roman);


    return 0;
}