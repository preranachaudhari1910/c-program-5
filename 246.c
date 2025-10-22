#include <stdio.h>
int main() {
    int nav;
    printf("1. GPS Mode\n2. Manual Mode\n3. Auto Pilot\nEnter choice: ");
    scanf("%d", &nav);
    switch(nav) {
        case 1: printf("Using GPS navigation.\n"); break;
        case 2: printf("Manual control enabled.\n"); break;
        case 3: printf("Auto pilot activated.\n"); break;
        default: printf("Invalid Choice.\n");
    }
    return 0;
}
