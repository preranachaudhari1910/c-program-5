#include <stdio.h>
int main() {
    int pattern;
    printf("1. Zigzag\n2. Circular\n3. Straight Line\nEnter pattern: ");
    scanf("%d", &pattern);
    switch(pattern) {
        case 1: printf("Moving in zigzag pattern.\n"); break;
        case 2: printf("Moving in circles.\n"); break;
        case 3: printf("Moving straight ahead.\n"); break;
        default: printf("Invalid Pattern.\n");
    }
    return 0;
}
