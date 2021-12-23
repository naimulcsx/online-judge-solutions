#include <stdio.h>

void printA() {
    for (int i = 0; i < 7; i++)
        printf(" ");

    printf("A\n");
}

void printB() {
    for (int i = 0; i < 6; i++)
        printf(" ");

    printf("B B\n");
}

void printC() {
    for (int i = 0; i < 5; i++)
        printf(" ");

    printf("C   C\n");
}

void printD() {
    for (int i = 0; i < 4; i++) 
        printf(" ");

    printf("D     D\n");
}

void printE() {
    for (int i = 0; i < 3; i++)
        printf(" ");
        
    printf("E       E\n");
}

int main(void) {
    
    printA();
    printB();
    printC();
    printD();
    printE();
    printD();
    printC();
    printB();
    printA();

    return 0;
}