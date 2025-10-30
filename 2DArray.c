/*
Name:Dan Ochieng Awiti
Reg no:PA106/G/28773/25
Description:Program to display occupant and vacant rooms*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10]; 
    int floors = 5, rooms = 10;
    int i, j;

    
    srand(time(0)); 
    for (i = 0; i < floors; i++) {
        for (j = 0; j < rooms; j++) {
            occupancy[i][j] = rand() % 2; 
        }
    }

    printf("Occupancy Matrix (1 = occupied, 0 = vacant):\n");
    for (i = 0; i < floors; i++) {
        printf("Floor %d: ", i + 1);
        for (j = 0; j < rooms; j++) {
            printf("%d ", occupancy[i][j]);
        }
        printf("\n");
    }

    printf("\nOccupancy Summary:\n");
    int totalOccupied = 0, totalVacant = 0;

    for (i = 0; i < floors; i++) {
        int occupied = 0, vacant = 0;
        for (j = 0; j < rooms; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        totalOccupied += occupied;
        totalVacant += vacant;

        printf("Floor %d ? Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    printf("\nTotal Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n", totalVacant);

    return 0;
}