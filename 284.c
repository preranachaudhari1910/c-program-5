#include <stdio.h>
int main() {
    int lang;
    printf("1. English\n2. Spanish\n3. Japanese\nSelect language: ");
    scanf("%d", &lang);
    switch(lang) {
        case 1: printf("Language set to English.\n"); break;
        case 2: printf("Idioma cambiado a Español.\n"); break;
        case 3: printf("言語が日本語に設定されました。\n"); break;
        default: printf("Invalid Language.\n");
    }
    return 0;
}
