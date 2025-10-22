#include <stdio.h>
int main() {
    int save;
    printf("1. Normal\n2. Eco Mode\n3. Power Saver\nEnter mode: ");
    scanf("%d", &save);
    switch(save) {
        case 1: printf("Running normally.\n"); break;
        case 2: printf("Eco mode activated.\n"); break;
        case 3: printf("Power saver mode ON.\n"); break;
        default: printf("Invalid Mode.\n");
    }
    return 0;
}
