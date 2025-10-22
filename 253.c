#include <stdio.h>
int main() {
    int delivery;
    printf("1. Pickup\n2. Deliver\n3. Return\nChoose: ");
    scanf("%d", &delivery);
    switch(delivery) {
        case 1: printf("Picking up item.\n"); break;
        case 2: printf("Delivering item.\n"); break;
        case 3: printf("Returning to base.\n"); break;
        default: printf("Invalid.\n");
    }
    return 0;
}
