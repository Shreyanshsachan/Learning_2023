#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(const struct Student* students, int size, const char* name) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollno, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    struct Student students[] = {
        {1001, "John", 95.5},
        {1002, "Alice", 88.0},
        {1003, "Bob", 92.3}
    };

    int size = sizeof(students) / sizeof(struct Student);

    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    searchByName(students, size, searchName);

    return 0;
}
