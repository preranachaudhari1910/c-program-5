#include <stdio.h>
int main() {
    int light;
    printf("1. Bright\n2. Dim\n3. Dark\nEnter light condition: ");
    scanf("%d", &light);
    switch(light) {
        case 1: printf("Reducing light brightness.\n"); break;
        case 2: printf("Maintaining normal light.\n"); break;
        case 3: printf("Turning ON headlamp.\n"); break;
        default: printf("Invalid Input.\n");
    }
    return 0;
}
