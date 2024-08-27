#include <stdio.h>
#include <stdlib.h>

double greaterOfThree(double a, double b, double c) {
    if ( a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    double n1, n2, n3;
    
    printf("Enter a number: ");
    scanf("%lf", &n1);
    printf("Enter a second number: ");
    scanf("%lf", &n2);
    printf("Enter a third number: ");
    scanf("%lf", &n3);

    printf("The greater of the three numbers %.2f, %.2f and %.2f is: %.2f", n1, n2, n3, greaterOfThree( n1, n2, n3));
    printf("\n");

    return 0;
}