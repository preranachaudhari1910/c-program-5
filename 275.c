#include <stdio.h>
int main() {
    int hand;
    printf("1. Single Arm\n2. Dual Arm\n3. Multi Arm\nEnter type: ");
    scanf("%d", &hand);
    switch(hand) {
        case 1: printf("Using single robotic arm.\n"); break;
        case 2: printf("Dual arms activated.\n"); break;
        case 3: printf("Multi-arm system online.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
