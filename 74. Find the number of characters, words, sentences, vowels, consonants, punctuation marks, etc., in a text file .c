#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, punctuation = 0;
    
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }
    
    int inWord = 0;
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        if (isalpha(ch)) {
            if (strchr("AEIOUaeiou", ch)) {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else if (ch == '.' || ch == '!' || ch == '?') {
            sentences++;
        } else if (ispunct(ch)) {
            punctuation++;
        } else if (!isspace(ch)) {
            inWord = 1;
        }
    }
    if (inWord) {
        words++;
    }
    
    fclose(file);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Sentences: %d\n", sentences);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Punctuation Marks: %d\n", punctuation);
    return 0;
}
