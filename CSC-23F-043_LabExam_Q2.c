#include <stdio.h>
#include <string.h>

// Function to print a string in alphabetical order
void printAlphabeticalOrder(char *str) {
    int length = strlen(str);
    
    // Sorting the characters in the string
    	int i = 0, j = 0;
	for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                // Swap characters if they are out of order
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    // Printing the sorted string
    printf("String in alphabetical order: %s\n", str);
}

int main() {
    char inputString[100];

    // Get a string from the user
    printf("Enter a string: ");
    gets(inputString);

    // Call the function to print the string in alphabetical order
    printAlphabeticalOrder(inputString);

    return 0;
}