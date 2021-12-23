#include <stdio.h>
#include <stdlib.h>

int main(void) {

    while(1) {
        int h1, m1, h2, m2, h, m;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;

        if(h2 > h1) 
            h = h2 - h1;

        if (h1 > h2) 
            h = 24 - (h1 - h2);

        if (h2 == h1) {
            if (m2 > m1) h = 0;
            else h = 24;
        }

        if (m2 > m1) 
            m = m2 - m1;
        

        if (m1 > m2) {
            h--;
            m = abs(60 - m1 + m2);
        }

        if (m1 == m2)
            m = 0;
        

        printf("%d\n", h*60 + m);
    }

    return 0;
}