#include <stdio.h>
int main() {
    int level;
    printf("1. Easy\n2. Medium\n3. Hard\nEnter AI difficulty: ");
    scanf("%d", &level);
    switch(level) {
        case 1: printf("AI set to Easy mode.\n"); break;
        case 2: printf("AI set to Medium mode.\n"); break;
        case 3: printf("AI set to Hard mode.\n"); break;
        default: printf("Invalid Difficulty.\n");
    }
    return 0;
}
