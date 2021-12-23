#include <stdio.h>

int result(int result) {
    int exp = 0;
    int base = 2;

    while (result != 1) {
        result /= 2;
        exp++;
    }
    
    return exp;
}

int main(void) {
    int ninja;

    while(scanf("%d", &ninja) != EOF) {
        printf("%d\n",result(ninja));
    }

    return 0;
}