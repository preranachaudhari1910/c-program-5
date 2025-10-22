#include <stdio.h>
int main() {
    int mode;
    printf("1. Cool Mode\n2. Heat Mode\n3. Normal Mode\nEnter choice: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Cooling system activated.\n"); break;
        case 2: printf("Heating system activated.\n"); break;
        case 3: printf("Normal temperature maintained.\n"); break;
        default: printf("Invalid Mode.\n");
    }
    return 0;
}
