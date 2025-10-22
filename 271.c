#include <stdio.h>
int main() {
    int motion;
    printf("1. Walk\n2. Roll\n3. Fly\nEnter motion type: ");
    scanf("%d", &motion);
    switch(motion) {
        case 1: printf("Robot walking mode enabled.\n"); break;
        case 2: printf("Robot rolling on wheels.\n"); break;
        case 3: printf("Robot flying using propellers.\n"); break;
        default: printf("Invalid Motion Type.\n");
    }
    return 0;
}
