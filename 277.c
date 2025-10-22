#include <stdio.h>
int main() {
    int tool;
    printf("1. Drill\n2. Screw\n3. Paint\nEnter tool: ");
    scanf("%d", &tool);
    switch(tool) {
        case 1: printf("Drilling in progress.\n"); break;
        case 2: printf("Screwing bolts.\n"); break;
        case 3: printf("Painting surface.\n"); break;
        default: printf("Invalid Tool.\n");
    }
    return 0;
}
