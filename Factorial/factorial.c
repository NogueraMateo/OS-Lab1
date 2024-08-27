#include <stdio.h>
#include <stdlib.h>

int calculate_factorial(int n) {
    if ( (n == 0) || (n == 1)) return 1;

    return n * calculate_factorial(n-1);
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("The factorial of negative numbers doesn't exist\n");
        return 1;
    }
        
    printf("The factorial of the number %d is: %d\n", number, calculate_factorial(number));
    printf("\n");
    
    return 0;
}