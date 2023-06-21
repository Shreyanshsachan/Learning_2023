//Reverse The Array
#include <stdio.h>

void reverseArray(int array[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    reverseArray(array, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
