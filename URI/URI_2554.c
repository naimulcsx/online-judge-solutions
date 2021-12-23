#include <stdio.h>

int main(void) {
    int people, dates;

    while (scanf("%d %d", &people, &dates) != EOF) {
        char attendDates[dates][25];
        int attendArr[dates][people];
        int count = 0, number = 0;
        int result[2];

        for(int i = 0; i < dates; i++) {
            scanf("%s", attendDates[i]);
            
            for(int k =  0; k < people; k++) 
                scanf("%d", &attendArr[i][k]);
        }

        for(int i = 0; i < dates; i++) {
            count = 0;
            number = 0;
            result[0] = 0;
            result[1] = 0;
            

            for(int k =  0; k < people; k++) {
                number = i;
                if (attendArr[i][k] != 0) {
                    count++;
                }
            }

            if (count == people) {
                result[0] = count;
                result[1] = number;
                break;
            }
        }

        if (result[0] != people) 
            printf("Pizza antes de FdI\n");
        else
            printf("%s\n", attendDates[result[1]]);
        
    } 

  return 0;
}