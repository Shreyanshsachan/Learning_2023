#include <stdio.h>

int main() {
    int grade;

    printf("Enter the student's grade: ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf("Grade A\n");
    } else if (grade >= 75 && grade <= 89) {
        printf("Grade B\n");
    } else if (grade >= 60 && grade <= 74) {
        printf("Grade C\n");
    } else if (grade >= 50 && grade <= 59) {
        printf("Grade D\n");
    } else if (grade >= 0 && grade <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid grade\n");
    }

    return 0;
}
