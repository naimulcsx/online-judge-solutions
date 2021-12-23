#include <stdio.h>
#include <string.h>

int main(void) {
    int tabs, clicks;
    scanf("%d %d", &tabs, &clicks);
    char message[10];

    for (int i = 0; i < clicks; i++) {
        scanf("%s", message);

        if (strcmp(message, "fechou") == 0) {
            tabs--;
            tabs += 2;
        }

        if (strcmp(message, "clicou") == 0) {
            tabs--;
        }
    }

    printf("%d\n", tabs);

    return 0;
}