#include <stdio.h>
int main() {
    int path;
    printf("1. Clear\n2. Blocked\n3. Unknown\nEnter path status: ");
    scanf("%d", &path);
    switch(path) {
        case 1: printf("Moving forward.\n"); break;
        case 2: printf("Path blocked, turning left.\n"); break;
        case 3: printf("Scanning area.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
