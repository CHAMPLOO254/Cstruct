#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 2; // Change this if you want a different size
    struct HardwareItem hardwareItems[arraySize];

    // Add hardware items to the array
    addHardwareItems(hardwareItems, arraySize);

    // Print the structure elements
    printHardwareItems(hardwareItems, arraySize);

    return 0;
}

