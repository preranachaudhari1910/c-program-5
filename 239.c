#include <stdio.h>
int main() {
    int light;
    printf("1. Headlight ON\n2. Headlight OFF\nChoose: ");
    scanf("%d", &light);
    switch(light) {
        case 1: printf("Headlight Turned ON.\n"); break;
        case 2: printf("Headlight Turned OFF.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
