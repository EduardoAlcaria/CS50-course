#include <stdio.h>
#include <ctype.h>

void encrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; ++i) {
        char ch = text[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            text[i] = (ch + shift - 'A') % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            text[i] = (ch + shift - 'a') % 26 + 'a';
        }
    }
}

int main() {
    char text[100];
    int shift;

    printf("Enter a message to encrypt: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    encrypt(text, shift);

    printf("Encrypted message: %s", text);

    return 0;
}
