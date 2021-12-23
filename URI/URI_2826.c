#include <stdio.h>
#include <string.h>

int testString(char *str1 , char *str2, int j) {
    if (str1[j] > str2[j]) return 1;
    if (str1[j] < str2[j]) return -1;
    else return 0;
}

int main(void) {
    char a[100], b[100];
    gets(a);
    gets(b);

    int j = 0;

    int res = testString(a, b, j);

    while(res == 0) {
        j++;
        res = testString(a, b, j);
    }

    if (res == -1) {
        printf("%s\n", a); 
        printf("%s\n", b); 
    } else if (res == 1) {
        printf("%s\n", b); 
        printf("%s\n", a); 
    } 
        

    return 0;
}