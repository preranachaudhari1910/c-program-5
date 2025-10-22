#include <stdio.h>
int main() {
    int cmd;
    printf("1. Start\n2. Stop\n3. Report Status\nChoose command: ");
    scanf("%d", &cmd);
    switch(cmd) {
        case 1: printf("Robot Starting...\n"); break;
        case 2: printf("Robot Stopping...\n"); break;
        case 3: printf("All systems normal.\n"); break;
        default: printf("Invalid Command.\n");
    }
    return 0;
}
