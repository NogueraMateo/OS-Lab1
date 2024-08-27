#include <stdio.h>
#include <stdlib.h>


int is_even( int n ) {
    if ( (n % 2)  == 0 ) {
        return 1;
    }
    return 0;
}


int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (is_even(number)) {
        printf("The number %d is even\n", number);
    } else {
        printf("The number %d is odd\n", number);
    }

    return 0;

}