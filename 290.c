#include <stdio.h>
int main() {
    int mainMode;
    printf("1. Software Update\n2. Hardware Check\n3. Sensor Calibration\nEnter mode: ");
    scanf("%d", &mainMode);
    switch(mainMode) {
        case 1: printf("Updating robot software...\n"); break;
        case 2: printf("Running hardware diagnostics...\n"); break;
        case 3: printf("Calibrating sensors...\n"); break;
        default: printf("Invalid Mode.\n");
    }
    return 0;
}
