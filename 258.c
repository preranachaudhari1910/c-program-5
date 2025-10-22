#include <stdio.h>
int main() {
    int path;
    printf("1. Shortest Path\n2. Safe Path\n3. Scenic Path\nEnter choice: ");
    scanf("%d", &path);
    switch(path) {
        case 1: printf("Choosing Shortest Path.\n"); break;
        case 2: printf("Choosing Safe Path.\n"); break;
        case 3: printf("Choosing Scenic Path.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
