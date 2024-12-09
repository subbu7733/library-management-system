#include <stdio.h>
#include <string.h>
#define MAX 100
void encrypt(char text[], int key) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        }
    }
}
void decrypt(char text[], int key) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' - key + 26) % 26) + 'A';
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' - key + 26) % 26) + 'a';
        }
    }
}
int main() {
    char text[MAX];
    int key;
    printf("Enter text (no spaces): ");
    scanf("%s", &text);
    printf("Enter key: ");
    scanf("%d", &key);
    encrypt(text, key);
    printf("Encrypted:%s\n", text);
    decrypt(text, key);
    printf("Decrypted: %s\n", text);
    return 0;
}
