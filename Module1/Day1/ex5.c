#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num = num | (1 << 0);
            break;
        case 2:
            num = num & ~(1 << 31);
            break;
        case 3:
            num = num ^ (1 << 15);
            break;
        default:
            printf("Invalid operation type\n");
            break;
    }

    return num;
}

int main() {
    int number, operationType;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    int result = bit_operations(number, operationType);
    printf("Result: %d\n", result);

    return 0;
}
