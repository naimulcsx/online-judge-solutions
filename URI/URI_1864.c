#include <stdio.h>

int main(void) {
   char msg[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%c", msg[i]);
    
    printf("\n");

  return 0;
}