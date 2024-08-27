#include <stdio.h>
#include <stdlib.h>

/*
* Checking for uppercased letters using ASCII table
 */
int is_upperacase( char letter ) {
    if ( letter >= 'A' && letter <= 'Z' ) {
        return 1;
    }

    return 0;
}

int main() {

    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        if (is_upperacase(letter)) {
        printf("The letter %c is capitalized\n", letter);
        }
        else {
            printf("The letter %c is not in uppercase\n", letter);
        }

        return 0;
    }

    printf("The character %c is not a letter\n", letter );
    

    return 0;
}