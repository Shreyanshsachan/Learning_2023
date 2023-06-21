#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main() {
    int size;
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    students = (struct Student*)malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    initializeArray(students, size);

    printf("\nInitialized Array of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d - Roll No: %d, Name: %s, Marks: %.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);

    return 0;
}
