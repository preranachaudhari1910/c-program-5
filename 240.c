#include <stdio.h>
int main() {
    int ch;
    printf("1. Charging\n2. Fully Charged\n3. Low Battery\nEnter status: ");
    scanf("%d", &ch);
    switch(ch) {
        case 1: printf("Robot Charging...\n"); break;
        case 2: printf("Battery Full.\n"); break;
        case 3: printf("Battery Low! Return to Dock.\n"); break;
        default: printf("Unknown Status.\n");
    }
    return 0;
}
