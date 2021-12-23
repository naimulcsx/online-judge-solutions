#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tower_from, floor_from, tower_to, floor_to;
} data;

int main(void) {
    int towers, floors, lowest_passage, highest_passage, queries;
    scanf("%d %d %d %d %d", &towers, &floors, &lowest_passage, &highest_passage, &queries);

    data arr[queries];

    for(int i = 0; i < queries; i++) {
        scanf("%d %d %d %d", &arr[i].tower_from, &arr[i].floor_from, &arr[i].tower_to, &arr[i].floor_to);
    }

    

    for(int i = 0; i < queries; i++) {
        int time = 0;

        int highestPassageUsed = 0;
        int lowestPassageUsed = 0;
  
        if (arr[i].floor_from > highest_passage && arr[i].tower_to != arr[i].tower_from ) {
            time += abs(arr[i].floor_to - highest_passage);
            time += abs(arr[i].floor_from - highest_passage);

        } else if (arr[i].floor_from < lowest_passage && arr[i].tower_to != arr[i].tower_from ) {
            time += abs(arr[i].floor_to - lowest_passage);
            time += abs(arr[i].floor_from - lowest_passage);
        } else {
            time += abs(arr[i].floor_to - arr[i].floor_from);
        }
        
        time += abs(arr[i].tower_to - arr[i].tower_from);
        

        // if (arr[i].floor_from == highest_passage || arr[i].floor_from == lowest_passage) {
            
        // }
 
        printf("%d\n", time);
    }

    return 0;
}