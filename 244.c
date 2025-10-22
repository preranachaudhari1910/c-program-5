#include <stdio.h>
int main() {
    int area;
    printf("1. Zone A\n2. Zone B\n3. Zone C\nEnter patrol zone: ");
    scanf("%d", &area);
    switch(area) {
        case 1: printf("Patrolling Zone A...\n"); break;
        case 2: printf("Patrolling Zone B...\n"); break;
        case 3: printf("Patrolling Zone C...\n"); break;
        default: printf("Invalid Zone.\n");
    }
    return 0;
}
