#include <stdio.h>
#include <stdlib.h>

/*
This function has the purpose of calculating the fibonacci number in
the n position.
* Example: Fibonacci number in position 6 is 8 starting from position 0
*/
void fibonacci( int position ) {
    
    int pastNumber = 0;
    int result = 1;
    for (int i = 0; i < position - 1; ++i) {
        if ( i == 0 ) printf("%d, ", i);
        if ( i == 1 ) printf("%d, ", i);
        result += pastNumber;
        printf("%d, ", result);
        pastNumber = result - pastNumber;    
    }
}

int main() {
    int position;
    printf("Ingresa la posicion hasta donde quieres imprimir la serie de Fibonacci: ");
    scanf("%d", &position);
    fibonacci(position);
    printf("\n");

    return 0;
}

