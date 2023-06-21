//Min & Max of 1D Array
#include <stdio.h>
#include <limits.h>

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
