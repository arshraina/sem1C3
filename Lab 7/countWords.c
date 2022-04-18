#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a sentence: ");
    char string[100];
    gets(string);
    printf("%s\n", string);

    int vowels = 0;
    int spaces = 0;
    int consonants = 0;

    char vow[10] = {'a','e','i','o','u','A','E','I','O','U'};
    char cons[42] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    for (int i = 0; i < strlen(string); i++) {
        for (int j = 0; j < 10; j++) {
            if (string[i] == vow[j]) {
                vowels++;
            }
        }
        for (int j = 0; j < 42; j++) {
            if (string[i] == cons[j]) {
                consonants++;
            }
        }
    }

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ') {
            spaces++;
        }
    }
    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    printf("total characters: %d\n", strlen(string));
    printf("total words: %d\n", spaces + 1);
}
