#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void swap(struct Student* a, struct Student* b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void displayArray(const struct Student* students, int size) {
    printf("Array of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d - Roll No: %d, Name: %s, Marks: %.2f\n",
               i + 1, students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[] = {
        {1001, "John", 95.5},
        {1002, "Alice", 88.0},
        {1003, "Bob", 92.3}
    };

    int size = sizeof(students) / sizeof(struct Student);

    sortArray(students, size);

    displayArray(students, size);

    return 0;
}
