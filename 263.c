#include <stdio.h>
int main() {
    int gesture;
    printf("1. Wave\n2. Thumbs Up\n3. Stop Sign\nEnter gesture: ");
    scanf("%d", &gesture);
    switch(gesture) {
        case 1: printf("Recognized: Waving Hand.\n"); break;
        case 2: printf("Recognized: Thumbs Up.\n"); break;
        case 3: printf("Recognized: Stop Gesture.\n"); break;
        default: printf("Unknown Gesture.\n");
    }
    return 0;
}
