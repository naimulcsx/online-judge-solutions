#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    

    // when temperature decreased
    if (A - B > 0) {
        if (B - C <= 0) {
            printf(":)\n");
        } else {
            if (  abs((B - C)) < abs((A - B)) ) {
                printf(":)\n");
            } else {
                printf(":(\n");
            }
        }
    }

    // when temperature increased
    if (A - B < 0) {
        if (B - C >= 0) {
            printf(":(\n");
        } else {
            if (  abs(B - C) < abs(A - B) ) {
                printf(":(\n");
            } else {
                printf(":)\n");
            }
        }
    }

    if (A - B == 0) {
        if ( B - C < 0) {
            printf(":)\n");
        } else {
            printf(":(\n");
        }
    }

    return 0;
}