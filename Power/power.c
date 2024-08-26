#include <stdio.h>
#include <stdlib.h>

float calculate_power( int n , int e ) {
    if (e < 0) 
        return 1 / ( n * calculate_power(n, ( e * (-1) ) - 1 ));
    
    if (e == 0) 
        return 1;
    if (e == 1) 
        return n;

    return n * calculate_power(n, e - 1);
}

int main() {
    int number;
    int exponent;

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("The result of %d to the power of %d is: %f", number, exponent, calculate_power(number, exponent));

    return 0;
}