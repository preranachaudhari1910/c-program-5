#include <stdio.h>
int main() {
    int sound;
    printf("1. Silent\n2. Normal\n3. Loud\nEnter mode: ");
    scanf("%d", &sound);
    switch(sound) {
        case 1: printf("Silent Mode ON.\n"); break;
        case 2: printf("Normal Volume.\n"); break;
        case 3: printf("Loud Volume.\n"); break;
        default: printf("Invalid Mode.\n");
    }
    return 0;
}
