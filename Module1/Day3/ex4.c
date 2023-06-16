#include <stdio.h>

int deleteDigitAndGetLargest(int number) {
    int largest = 0;
    int temp = number;

    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                largest = largest * 10 + (temp / divisor) % 10;
            }
            divisor *= 10;
        }
        if (largest > number) {
            number = largest;
        }
        largest = 0;
    }

    return number;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = deleteDigitAndGetLargest(number);

    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}
