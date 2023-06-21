//Diff between even & odd indexed elements
#include <stdio.h>

int main() {
    int array[] = {2, 4, 6, 8, 10, 3, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);

    int sumEvenIndex = 0;
    int sumOddIndex = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndex += array[i];
        } else {
            sumOddIndex += array[i];
        }
    }

    int diff = sumEvenIndex - sumOddIndex;

    printf("Sum of elements at even indices: %d\n", sumEvenIndex);
    printf("Sum of elements at odd indices: %d\n", sumOddIndex);
    printf("Difference: %d\n", diff);

    return 0;
}
