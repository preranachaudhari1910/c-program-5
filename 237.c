#include <stdio.h>
int main() {
    int view;
    printf("1. Front View\n2. Side View\n3. Rear View\nChoose: ");
    scanf("%d", &view);
    switch(view) {
        case 1: printf("Front Camera Activated.\n"); break;
        case 2: printf("Side Camera Activated.\n"); break;
        case 3: printf("Rear Camera Activated.\n"); break;
        default: printf("Invalid View.\n");
    }
    return 0;
}
