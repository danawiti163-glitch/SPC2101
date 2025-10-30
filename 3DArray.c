#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int chain[3][5][10];
    int branches = 3, floors = 5, rooms = 10;
    int b, f, r;

    
    srand(time(0)); 
    for (b = 0; b < branches; b++) {
        for (f = 0; f < floors; f++) {
            for (r = 0; r < rooms; r++) {
                chain[b][f][r] = rand() % 2; 
            }
        }
    }

    
    int totalOccupied = 0;

    printf("Hotel Chain Occupancy Report\n");

    for (b = 0; b < branches; b++) {
        printf("Branch %d:\n", b + 1);
        int branchOccupied = 0;
        for (f = 0; f < floors; f++) {
            printf("  Floor %d: ", f + 1);
            for (r = 0; r < rooms; r++) {
                printf("%d ", chain[b][f][r]);
                if (chain[b][f][r] == 1)
                    branchOccupied++;
            }
            printf("\n");
        }
        printf("  ? Total occupied rooms in Branch %d: %d\n\n", b + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

    printf("\n");
    printf("Total number of occupied rooms across ALL branches: %d\n", totalOccupied);

    return 0;
}