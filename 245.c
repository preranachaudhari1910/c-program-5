#include <stdio.h>
int main() {
    int alarm;
    printf("1. Fire Alarm\n2. Intruder Alert\n3. System OK\nEnter status: ");
    scanf("%d", &alarm);
    switch(alarm) {
        case 1: printf("Fire Detected! Activating sprinkler.\n"); break;
        case 2: printf("Intruder Alert! Sounding alarm.\n"); break;
        case 3: printf("System Secure.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
