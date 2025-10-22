#include <stdio.h>
int main() {
    int option;
    printf("1. Sweep\n2. Mop\n3. Vacuum\nEnter choice: ");
    scanf("%d", &option);
    switch(option) {
        case 1: printf("Sweeping Floor.\n"); break;
        case 2: printf("Mopping Floor.\n"); break;
        case 3: printf("Vacuuming Dust.\n"); break;
        default: printf("Invalid Cleaning Mode.\n");
    }
    return 0;
}
