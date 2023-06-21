#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* students, int size, const char* input) {
    char* token;
    char* context;
    int count = 0;

    token = strtok_s(input, " ", &context);
    while (token != NULL && count < size) {
        students[count].rollno = atoi(token);

        token = strtok_s(NULL, " ", &context);
        strcpy(students[count].name, token);

        token = strtok_s(NULL, " ", &context);
        students[count].marks = atof(token);

        token = strtok_s(NULL, " ", &context);
        count++;
    }
}

int main() {
    int size;
    char input[100];
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    students = (struct Student*)malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    fflush(stdin);

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    initializeArray(students, size, input);

    printf("\nInitialized Array of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d - Roll No: %d, Name: %s, Marks: %.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
