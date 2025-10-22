#include <stdio.h>
int main() {
    int zoom;
    printf("1. Zoom In\n2. Zoom Out\n3. Normal View\nEnter option: ");
    scanf("%d", &zoom);
    switch(zoom) {
        case 1: printf("Zooming in...\n"); break;
        case 2: printf("Zooming out...\n"); break;
        case 3: printf("Reset to normal view.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
