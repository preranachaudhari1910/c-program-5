#include <stdio.h>
int main() {
    int obstacle;
    printf("1. No Obstacle\n2. Small Obstacle\n3. Large Obstacle\nEnter status: ");
    scanf("%d", &obstacle);
    switch(obstacle) {
        case 1: printf("Continue moving.\n"); break;
        case 2: printf("Slowing down.\n"); break;
        case 3: printf("Stopping immediately!\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
