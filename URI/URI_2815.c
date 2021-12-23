#include <stdio.h>
#include <string.h>

int main() {
    char msg[10000], filter[10000];
    int signal = 0, j = 0;

    scanf("%[^\n]", msg);

    for (int i = 0; i < strlen(msg); i++) {

        if (i <= strlen(msg) - 3) {
            if (msg[i] == msg[i + 2] && msg[i + 1] == msg[i + 3]) {
                signal = 1;
                continue;
            }
        }

        if (signal == 1) {
            signal = 0;
            continue;
        } else {
            filter[j] = msg[i];
            j++;
        }
    }

    filter[j] = '\0';

    printf("%s\n", filter);  

    return 0;
}