#include <stdio.h>
#include <stdlib.h>

/*
* Function to check if a year is a leap year
* @param year: the year to check
 */
int is_leap_year(int year) {
    // If the year is divisible by 400, then it's divisible by 100 and 4
    if ((year % 400) == 0) {
        return 1;
    }

    // If the year is divisible by 100, but not by 400, then it's not a leap year
    if ((year % 100) == 0) {
        return 0;
    }

    // If the year is only divisible by 4, then it's a leap year
    if ((year % 4) == 0) {
        return 1;
    }
    return 0;
}


int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (is_leap_year(year)) {
        printf("The year %d is a leap year\n", year);
    } else {
        printf("The year %d is not a leap year\n", year);
    }

    printf("\n");

    return 0;
}