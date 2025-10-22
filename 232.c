#include <stdio.h>
int main() {
    int dir;
    printf("1. Forward\n2. Backward\n3. Left\n4. Right\nChoose: ");
    scanf("%d", &dir);
    switch(dir) {
        case 1: printf("Moving Forward.\n"); break;
        case 2: printf("Moving Backward.\n"); break;
        case 3: printf("Turning Left.\n"); break;
        case 4: printf("Turning Right.\n"); break;
        default: printf("Invalid Direction.\n");
    }
    return 0;
}
