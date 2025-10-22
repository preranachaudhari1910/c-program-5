#include <stdio.h>
int main() {
    int face;
    printf("1. Known Person\n2. Unknown Person\n3. No Face Detected\nEnter status: ");
    scanf("%d", &face);
    switch(face) {
        case 1: printf("Access Granted.\n"); break;
        case 2: printf("Access Denied.\n"); break;
        case 3: printf("Waiting for face input.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
