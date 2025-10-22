#include <stdio.h>
int main() {
    int move;
    printf("1. Lift Up\n2. Put Down\n3. Rotate\nChoose: ");
    scanf("%d", &move);
    switch(move) {
        case 1: printf("Arm Lifting Up.\n"); break;
        case 2: printf("Arm Putting Down.\n"); break;
        case 3: printf("Arm Rotating.\n"); break;
        default: printf("Invalid Command.\n");
    }
    return 0;
}
