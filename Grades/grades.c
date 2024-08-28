#include <stdio.h>
#include <stdbool.h>

struct grades
{
    char name[30];
    float nE1;
    float nE2;
    float nAQ;
    float nP;
    float grade;
    bool passed;
};

int main() {
    int n;

    printf("Enter mount students: ");
    scanf("%d", &n);

    struct grades students[n];

    for (int i  = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the grade for exam 1 of student %d: ", i + 1);
        scanf("%f", &students[i].nE1);

        printf("Enter the grade for exam 2 of student %d: ", i + 1);
        scanf("%f", &students[i].nE2);

        printf("Enter the grade for assignments and quizzes of student %d: ", i + 1);
        scanf("%f", &students[i].nAQ);

        printf("Enter the grade for project of student %d: ", i + 1);
        scanf("%f", &students[i].nP);

        students[i].grade = students[i].nE1 * 0.3 + students[i].nE2 * 0.25 + students[i].nAQ * 0.25 + students[i].nP * 0.2;

        if (students[i].grade >= 3) {
            students[i].passed = true;
        } else {
            students[i].passed = false;
        }

        printf("\n");
    }

    printf("Student\tName\tGrade\tPassed\n");

    for (int i  = 0; i < n; i++) {
        printf("%d\t%s\t%.1f\t%s\n",
            i + 1,
            students[i].name,
            students[i].grade,
            students[i].passed ? "Yes" : "No"
        );
    }
}