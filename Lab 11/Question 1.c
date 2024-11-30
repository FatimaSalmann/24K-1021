#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1; // Return with an error code
    }

    // Open the destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Unable to open destination file.\n");
        fclose(sourceFile); 
        return 1; 
    }

    // Copy contents from source to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    printf("File contents copied successfully!\n");
    return 0; 
}
