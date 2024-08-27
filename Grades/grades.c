#include <stdio.h>

typedef struct
{
    char name[30];
    double grade;
    int passed;
} Grade;


int main() {

    int totalStudents;
    printf("Enter the total of students: ");
    scanf("%d", &totalStudents);

    Grade operatingSystemsGrades[totalStudents];

    for (int i= 0; i < totalStudents; ++i) {
        printf("Enter the name of the %d student: ", i+1);
        scanf("%s", operatingSystemsGrades[i].name);
        printf("Enter the grade: ");
        scanf("%lf", &operatingSystemsGrades[i].grade);
        
        if (operatingSystemsGrades[i].grade >= 3) {
            operatingSystemsGrades[i].passed = 1;
        }
        else {
            operatingSystemsGrades[i].passed = 0;
        }
    }

    for (int i = 0; i < totalStudents; ++i) {
        printf("Student %d: %s, Grade: %.2f, Passed: %s\n", 
               i + 1, 
               operatingSystemsGrades[i].name, 
               operatingSystemsGrades[i].grade, 
               operatingSystemsGrades[i].passed ? "Yes" : "No");
    }

    return 0;
}