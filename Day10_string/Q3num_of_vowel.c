
#include <stdio.h>

int main() {
    char str[30];
    int vowel = 0, consonant = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonant++;
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);

    return 0;
}






