#include <stdio.h>
#include <string.h>

int main(void) {
    char vertebrado[] = "vertebrado";
    char invertebrado[] = "invertebrado";

    char ave[] = "ave";
    char mamifero[] = "mamifero";
    char anelideo[] = "anelideo";
    char inseto[] = "inseto";

    char carnivoro[] = "carnivoro";
    char onivoro[] = "onivoro";
    char herbivoro[]  = "herbivoro";
    char hematofago[] = "hematofago";

    char input_1[30];
    char input_2[30];
    char input_3[30];

    scanf("%s", input_1);
    scanf("%s", input_2);
    scanf("%s", input_3);

    if (strcmp(input_1, vertebrado) == 0) {

        if (strcmp(input_2,ave) == 0) {
            //carnivoro, onivoro
            if (strcmp(input_3, carnivoro) == 0)
                printf("aguia\n");
            else if (strcmp(input_3, onivoro) == 0)
                printf("pomba\n");
        
        } else if (strcmp(input_2,mamifero) == 0) {
            // onivoro, herbivoro
            if (strcmp(input_3, onivoro) == 0)
                printf("homem\n");
            else if (strcmp(input_3, herbivoro) == 0)
                printf("vaca\n");
        } 

    } else if (strcmp(input_1, invertebrado) == 0) {

        if (strcmp(input_2, anelideo) == 0) {
            // hematofago, onivoro
            if (strcmp(input_3, hematofago) == 0)
                printf("sanguessuga\n");
            else if (strcmp(input_3, onivoro) == 0)
                printf("minhoca\n");
            
        } else if (strcmp(input_2, inseto) == 0) {
            //hematofago, herbivoro
            if (strcmp(input_3, hematofago) == 0)
                printf("pulga\n");
            else if (strcmp(input_3, herbivoro) == 0)
                printf("lagarta\n");
        }

    }

    return 0;
}