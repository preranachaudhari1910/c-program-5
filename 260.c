#include <stdio.h>
int main() {
    int mode;
    printf("1. Sleep\n2. Restart\n3. Shutdown\nEnter command: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Robot entering sleep mode.\n"); break;
        case 2: printf("Restarting system.\n"); break;
        case 3: printf("Shutting down...\n"); break;
        default: printf("Invalid Command.\n");
    }
    return 0;
}
