#include <stdio.h>
int main() {
    int code;
    printf("1. Fire\n2. Intruder\n3. Medical Help\nEnter emergency code: ");
    scanf("%d", &code);
    switch(code) {
        case 1: printf("Fire Alert! Activating sprinklers.\n"); break;
        case 2: printf("Intruder Alert! Locking doors.\n"); break;
        case 3: printf("Calling for medical assistance.\n"); break;
        default: printf("Invalid Code.\n");
    }
    return 0;
}
