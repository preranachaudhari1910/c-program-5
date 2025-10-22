#include <stdio.h>
int main() {
    int code;
    printf("1. Motor Error\n2. Sensor Error\n3. Power Error\nEnter error: ");
    scanf("%d", &code);
    switch(code) {
        case 1: printf("Motor malfunction detected.\n"); break;
        case 2: printf("Sensor not responding.\n"); break;
        case 3: printf("Power supply issue.\n"); break;
        default: printf("Unknown Error Code.\n");
    }
    return 0;
}
