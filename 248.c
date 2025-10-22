#include <stdio.h>
int main() {
    int battery;
    printf("1. Full\n2. Medium\n3. Low\nEnter battery level: ");
    scanf("%d", &battery);
    switch(battery) {
        case 1: printf("Battery Full. Good to go!\n"); break;
        case 2: printf("Battery Medium. Continue.\n"); break;
        case 3: printf("Battery Low. Please recharge.\n"); break;
        default: printf("Invalid Level.\n");
    }
    return 0;
}
