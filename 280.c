#include <stdio.h>
int main() {
    int dist;
    printf("1. Near\n2. Medium\n3. Far\nEnter distance: ");
    scanf("%d", &dist);
    switch(dist) {
        case 1: printf("Object detected nearby.\n"); break;
        case 2: printf("Object at medium range.\n"); break;
        case 3: printf("Object far away.\n"); break;
        default: printf("Invalid Distance.\n");
    }
    return 0;
}
