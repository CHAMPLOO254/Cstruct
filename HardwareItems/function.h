#ifndef FUNCTION_H
#define FUNCTION_H

struct HardwareItem {
    char category[100];
    float price;
    int unit;
};

void addHardwareItems(struct HardwareItem *hardwareItemsArray, int arraySize);
void printHardwareItems(struct HardwareItem *hardwareItemsArray, int arraySize);

#endif

