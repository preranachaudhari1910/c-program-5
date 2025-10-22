#include <stdio.h>
int main() {
    int cam;
    printf("1. Normal\n2. Thermal\n3. Night Vision\nChoose mode: ");
    scanf("%d", &cam);
    switch(cam) {
        case 1: printf("Normal camera view.\n"); break;
        case 2: printf("Thermal vision activated.\n"); break;
        case 3: printf("Night vision enabled.\n"); break;
        default: printf("Invalid Mode.\n");
    }
    return 0;
}
