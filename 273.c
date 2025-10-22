#include <stdio.h>
int main() {
    int obj;
    printf("1. Metal\n2. Plastic\n3. Paper\nEnter object type: ");
    scanf("%d", &obj);
    switch(obj) {
        case 1: printf("Sorting to metal bin.\n"); break;
        case 2: printf("Sorting to plastic bin.\n"); break;
        case 3: printf("Sorting to paper bin.\n"); break;
        default: printf("Invalid Object.\n");
    }
    return 0;
}
