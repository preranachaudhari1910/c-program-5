#include <stdio.h>
int main() {
    int tone;
    printf("1. Normal\n2. Polite\n3. Angry\nEnter tone: ");
    scanf("%d", &tone);
    switch(tone) {
        case 1: printf("Voice tone: Normal.\n"); break;
        case 2: printf("Voice tone: Polite.\n"); break;
        case 3: printf("Voice tone: Angry.\n"); break;
        default: printf("Invalid Tone.\n");
    }
    return 0;
}
