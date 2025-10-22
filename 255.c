#include <stdio.h>
int main() {
    int music;
    printf("1. Play\n2. Pause\n3. Stop\nEnter choice: ");
    scanf("%d", &music);
    switch(music) {
        case 1: printf("Playing Music.\n"); break;
        case 2: printf("Music Paused.\n"); break;
        case 3: printf("Music Stopped.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
