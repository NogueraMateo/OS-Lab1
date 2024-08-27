#include <stdio.h>
#include <stdlib.h>

/*
* Checking for lowercased letters using ASCII table
 */
int is_lowercase( char letter ) {
    if ( letter >= 'a' && letter <= 'z' ) {
        return 1;
    }

    return 0;
}

int main() {

    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        if (is_lowercase(letter)) {
        printf("The letter %c is in lowercase\n", letter);
        }
        else {
            printf("The letter %c is not in lowercase\n", letter);
        }

        return 0;
    }

    printf("The character %c is not a letter\n", letter );
    
    printf("\n");


    return 0;
}