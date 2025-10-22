#include <stdio.h>
int main() {
    int sound;
    printf("1. Beep\n2. Buzz\n3. Ding\nEnter choice: ");
    scanf("%d", &sound);
    switch(sound) {
        case 1: printf("Beep sound played.\n"); break;
        case 2: printf("Buzz sound played.\n"); break;
        case 3: printf("Ding sound played.\n"); break;
        default: printf("Invalid Sound.\n");
    }
    return 0;
}
