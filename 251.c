#include <stdio.h>
int main() {
    int weather;
    printf("1. Sunny\n2. Rainy\n3. Windy\nEnter weather: ");
    scanf("%d", &weather);
    switch(weather) {
        case 1: printf("Activating solar charge.\n"); break;
        case 2: printf("Closing waterproof shield.\n"); break;
        case 3: printf("Stabilizing balance.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
