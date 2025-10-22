#include <stdio.h>
int main() {
    int task;
    printf("1. Pick Object\n2. Place Object\n3. Scan Area\nChoose: ");
    scanf("%d", &task);
    switch(task) {
        case 1: printf("Picking Object...\n"); break;
        case 2: printf("Placing Object...\n"); break;
        case 3: printf("Scanning Area...\n"); break;
        default: printf("Invalid Task.\n");
    }
    return 0;
}
