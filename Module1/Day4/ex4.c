//Diff between even & odd elements
#include <stdio.h>

int main() {
    int array[] = {2, 4, 6, 8, 10, 3, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sumEven += array[i];
        } else {
            sumOdd += array[i];
        }
    }

    int diff = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", diff);

    return 0;
}
