#include <stdio.h>
int main() {
    int level;
    printf("1. Low\n2. Medium\n3. High\nEnter water level: ");
    scanf("%d", &level);
    switch(level) {
        case 1: printf("Water Level Low.\n"); break;
        case 2: printf("Water Level Normal.\n"); break;
        case 3: printf("Warning: Water Level High!\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
