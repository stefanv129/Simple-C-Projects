// Driving on a highway with 2 lanes in each direction, 
//     you reach a point where, due to infrastructure work, traffic is slowed down, and the 2 lanes merge into a single one. 
//     Assuming all drivers follow this rule, cars from the two lanes will merge alternately into the available lane. 
//     Write a program to interleave and display the order of cars after the merge, starting with the cars from the second lane.



#include "functii.h"


#include "functii.h"

int main() {
    int m, n;
    char temp[8];
    struct NOD *band1 = NULL;
    struct NOD *band2 = NULL;
    struct NOD *band3 = NULL;
    
    // Read the number of cars in the first and second lanes
    scanf("%d", &m);
    scanf("%d", &n);

    // Populate the first lane with cars
    for (int i = 0; i < m; i++) {
        scanf("%s", temp);
        band1 = add_nod(band1, temp);
    }

    // Populate the second lane with cars
    for (int j = 0; j < n; j++) {
        scanf("%s", temp);
        band2 = add_nod(band2, temp);
    }

    // Combine and display the interleaved order of cars after merging lanes
    band3 = funnel(band1, band2, band3);
    show(band3);

    return 0;
}

