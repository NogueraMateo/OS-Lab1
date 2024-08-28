#include <stdio.h>
#include <string.h>

void fibonacci(int n) {
    int a, b;

    a = 0;
    b = 1;

    for (int i = 0; i <= n; i++) {
        printf("%d, ", a);

        b += a;
        a = b - a;
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    fibonacci(n);

    printf("\n");

    return 0;
}