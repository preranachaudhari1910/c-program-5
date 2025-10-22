#include <stdio.h>
int main() {
    int lang;
    printf("1. English\n2. Hindi\n3. Marathi\nChoose language: ");
    scanf("%d", &lang);
    switch(lang) {
        case 1: printf("Hello, Human!\n"); break;
        case 2: printf("Namaste, Manav!\n"); break;
        case 3: printf("Namaskar, Manav!\n"); break;
        default: printf("Invalid Language.\n");
    }
    return 0;
}
