#include <stdio.h>
int main() {
    int com;
    printf("1. Bluetooth\n2. WiFi\n3. Offline\nEnter mode: ");
    scanf("%d", &com);
    switch(com) {
        case 1: printf("Connected via Bluetooth.\n"); break;
        case 2: printf("Connected via WiFi.\n"); break;
        case 3: printf("Offline Mode.\n"); break;
        default: printf("Invalid Mode.\n");
    }
    return 0;
}
