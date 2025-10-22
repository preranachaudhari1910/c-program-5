#include <stdio.h>
int main() {
    int stop;
    printf("1. Normal Stop\n2. Emergency Stop\n3. Restart\nEnter choice: ");
    scanf("%d", &stop);
    switch(stop) {
        case 1: printf("Stopping smoothly.\n"); break;
        case 2: printf("Emergency stop activated!\n"); break;
        case 3: printf("Restarting robot.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
