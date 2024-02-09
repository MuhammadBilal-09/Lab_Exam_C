#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char text[1000];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in writing mode
    file = fopen(filename, "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; // Exit with an error code
    }

    // Get text input from the user
    printf("Enter text to write to the file (Ctrl+D to finish on Unix/Linux, Ctrl+Z on Windows):\n");

    while (fgets(text, sizeof(text), stdin) != NULL) {
        // Write the text to the file
        fprintf(file, "%s", text);
    }

    // Close the file
    fclose(file);

    printf("File \"%s\" has been successfully written.\n", filename);

    return 0; // Exit successfully
}