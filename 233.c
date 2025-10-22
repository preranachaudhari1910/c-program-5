#include <stdio.h>
int main() {
    int speed;
    printf("1. Slow\n2. Medium\n3. Fast\nEnter speed: ");
    scanf("%d", &speed);
    switch(speed) {
        case 1: printf("Speed: Slow\n"); break;
        case 2: printf("Speed: Medium\n"); break;
        case 3: printf("Speed: Fast\n"); break;
        default: printf("Invalid Speed.\n");
    }
    return 0;
}
