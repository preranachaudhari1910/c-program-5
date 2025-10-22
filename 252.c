#include <stdio.h>
int main() {
    int lock;
    printf("1. Lock\n2. Unlock\nEnter choice: ");
    scanf("%d", &lock);
    switch(lock) {
        case 1: printf("Robot locked.\n"); break;
        case 2: printf("Robot unlocked.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
