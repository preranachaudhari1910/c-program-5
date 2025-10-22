#include <stdio.h>
int main() {
    int emotion;
    printf("1. Happy\n2. Sad\n3. Angry\nChoose: ");
    scanf("%d", &emotion);
    switch(emotion) {
        case 1: printf("🙂 Robot is Happy!\n"); break;
        case 2: printf("😔 Robot is Sad.\n"); break;
        case 3: printf("😠 Robot is Angry!\n"); break;
        default: printf("Unknown Emotion.\n");
    }
    return 0;
}
