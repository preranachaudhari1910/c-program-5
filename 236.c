#include <stdio.h>
int main() {
    int op;
    printf("1. Water Plants\n2. Check Soil\n3. Harvest Crop\nChoose: ");
    scanf("%d", &op);
    switch(op) {
        case 1: printf("Watering Plants...\n"); break;
        case 2: printf("Checking Soil Moisture...\n"); break;
        case 3: printf("Harvesting Crops...\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
