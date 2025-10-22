#include <stdio.h>
int main() {
    int energy;
    printf("1. Battery\n2. Solar\n3. External Power\nChoose: ");
    scanf("%d", &energy);
    switch(energy) {
        case 1: printf("Running on battery.\n"); break;
        case 2: printf("Using solar energy.\n"); break;
        case 3: printf("External power connected.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
