#include <stdio.h>
int main() {
    int type;
    printf("1. Fast Charge\n2. Normal Charge\n3. Trickle Charge\nChoose: ");
    scanf("%d", &type);
    switch(type) {
        case 1: printf("Fast Charging Enabled.\n"); break;
        case 2: printf("Normal Charging Mode.\n"); break;
        case 3: printf("Trickle Charging Activated.\n"); break;
        default: printf("Invalid Type.\n");
    }
    return 0;
}
