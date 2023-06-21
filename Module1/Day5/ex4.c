#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    int n;
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct Student*)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &(students[i].rollNumber));

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Age: ");
        scanf("%d", &(students[i].age));
    }

    printf("\nStored Data for %d Students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nDetails of Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }

    free(students);

    return 0;
}
