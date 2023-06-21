//Sum & Average of 1D Array
#include <stdio.h>

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    float average = (float)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
