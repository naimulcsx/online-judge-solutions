#include <stdio.h>

int main() {
    int password;

    while(1) {
        scanf("%d", &password);
        if (password == 2002) break;
        printf("Senha Invalida\n");
    }

    printf("Acesso Permitido\n");
    return 0;
}