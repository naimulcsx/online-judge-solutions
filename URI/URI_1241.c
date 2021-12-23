#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(n--) {
        char a[2000], b[2000];
        scanf("%s %s", a, b);

        int a_length = strlen(a);
        int b_length = strlen(b);

        int isFit = 1;

        for (int i = b_length - 1, j = a_length - 1; i >= 0; i--, j--) {
            if (a[j] != b[i]) {
                isFit = 0;
                break;
            }
        }

        if (isFit)  
            printf("encaixa\n");
        else 
            printf("nao encaixa\n");

    }

    
  return 0;
}