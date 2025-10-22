#include <stdio.h>
int main() {
    int w;
    printf("1. Light Load\n2. Medium Load\n3. Heavy Load\nEnter load: ");
    scanf("%d", &w);
    switch(w) {
        case 1: printf("Carrying light load.\n"); break;
        case 2: printf("Carrying medium load.\n"); break;
        case 3: printf("Carrying heavy load carefully.\n"); break;
        default: printf("Invalid Load.\n");
    }
    return 0;
}
