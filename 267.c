#include <stdio.h>
int main() {
    int gps;
    printf("1. Start Tracking\n2. Stop Tracking\n3. Show Location\nEnter option: ");
    scanf("%d", &gps);
    switch(gps) {
        case 1: printf("GPS Tracking Started.\n"); break;
        case 2: printf("GPS Tracking Stopped.\n"); break;
        case 3: printf("Current Location Displayed.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
