#include <stdio.h>
#include <string.h>
 

int main() {
    char binary[1000];
    static int oneCount;
    scanf("%s", binary);

    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1') {
            oneCount++;
        }
    }

    if (oneCount % 2 == 0)
        printf("%s0\n", binary);
    else 
        printf("%s1\n", binary);
  
    return 0;
}