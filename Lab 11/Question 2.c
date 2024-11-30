#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LENGTH 100

// onvert a string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}
// Main to count word frequencies
int main() {
    FILE *file;
    char word[MAX_WORD_LENGTH];
    char ch;
    char words[MAX_WORDS][MAX_WORD_LENGTH]; 
    int wordCount[MAX_WORDS] = {0}; // Array to store the count of each word
    int numWords = 0;

    // Open the file
    file = fopen("textfile.txt", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Read the file character by character
    int wordIndex = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            word[wordIndex++] = tolower(ch); // Add to word, convert to lowercase
        } else {
            if (wordIndex > 0) {
                word[wordIndex] = '\0'; 
                // Check if the word is already in the words array
                int found = 0;
                for (int i = 0; i < numWords; i++) {
                    if (strcmp(words[i], word) == 0) {
                        wordCount[i]++; 
                        found = 1;
                        break;
                    }
                }
                // If the word was not found, add it to the array
                if (!found && numWords < MAX_WORDS) {
                    strcpy(words[numWords], word);
                    wordCount[numWords] = 1;
                    numWords++;
                }
                wordIndex = 0; // Reset word index for the next word
            }
        }
    }

    // Handle the last word in case the file ends without punctuation or space
    if (wordIndex > 0) {
        word[wordIndex] = '\0';
        int found = 0;
        for (int i = 0; i < numWords; i++) {
            if (strcmp(words[i], word) == 0) {
                wordCount[i]++;
                found = 1;
                break;
            }
        }
        if (!found && numWords < MAX_WORDS) {
            strcpy(words[numWords], word);
            wordCount[numWords] = 1;
            numWords++;
        }
    }
    // Close the file
    fclose(file);

    printf("Word Frequency Count:\n");
    for (int i = 0; i < numWords; i++) {
        printf("%s: %d\n", words[i], wordCount[i]);
    }

    return 0;
}
