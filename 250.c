#include <stdio.h>
int main() {
    int d;
    printf("1. Text Mode\n2. Graphic Mode\n3. Voice Output\nEnter mode: ");
    scanf("%d", &d);
    switch(d) {
        case 1: printf("Displaying in Text Mode.\n"); break;
        case 2: printf("Showing Graphics.\n"); break;
        case 3: printf("Speaking Output.\n"); break;
        default: printf("Invalid Choice.\n");
    }
    return 0;
}
