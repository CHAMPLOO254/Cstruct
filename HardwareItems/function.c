#include <stdio.h>
#include "function.h"

// Function to add hardware items to the array
void addHardwareItems(struct HardwareItem *hardwareItemsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Hardware Item %d:\n", i + 1);
        printf("Category: ");
        scanf("%s", hardwareItemsArray[i].category); // Assuming category does not contain spaces
        printf("Price: ");
        scanf("%f", &hardwareItemsArray[i].price);
        printf("Unit: ");
        scanf("%d", &hardwareItemsArray[i].unit);
    }
}

// Function to print the structure elements
void printHardwareItems(struct HardwareItem *hardwareItemsArray, int arraySize) {
    printf("\nHardware Item Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Hardware Item %d:\n", i + 1);
        printf("Category: %s\n", hardwareItemsArray[i].category);
        printf("Price: %.2f\n", hardwareItemsArray[i].price);
        printf("Unit: %d\n", hardwareItemsArray[i].unit);
    }
}

