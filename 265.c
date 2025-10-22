#include <stdio.h>
int main() {
    int dust;
    printf("1. Clean Air\n2. Dusty Air\n3. Very Dusty\nEnter level: ");
    scanf("%d", &dust);
    switch(dust) {
        case 1: printf("Air Quality Good.\n"); break;
        case 2: printf("Activating Air Filter.\n"); break;
        case 3: printf("High Dust! Alert!\n"); break;
        default: printf("Invalid Level.\n");
    }
    return 0;
}
