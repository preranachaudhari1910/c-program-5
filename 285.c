#include <stdio.h>
int main() {
    int react;
    printf("1. Stop\n2. Turn Left\n3. Turn Right\nEnter reaction: ");
    scanf("%d", &react);
    switch(react) {
        case 1: printf("Stopping to avoid obstacle.\n"); break;
        case 2: printf("Turning left to bypass.\n"); break;
        case 3: printf("Turning right to bypass.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
