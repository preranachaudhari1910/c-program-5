#include <stdio.h>
int main() {
    int tool;
    printf("1. Cutter\n2. Gripper\n3. Welder\nChoose tool: ");
    scanf("%d", &tool);
    switch(tool) {
        case 1: printf("Cutter Attached.\n"); break;
        case 2: printf("Gripper Activated.\n"); break;
        case 3: printf("Welder Ready.\n"); break;
        default: printf("Invalid Tool.\n");
    }
    return 0;
}
