#include <stdio.h>
int main() {
    int mode;
    printf("1. ON\n2. OFF\nChoose: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Robot Powered ON.\n"); break;
        case 2: printf("Robot Powered OFF.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
