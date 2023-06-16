#include <stdio.h>

void printExponent(double num) {
    unsigned long long exponent;
    unsigned int hexExponent;
    unsigned int binaryExponent;

    exponent = *(unsigned long long*)&num;
    hexExponent = (exponent >> 52) & 0x7FF;
    binaryExponent = (exponent >> 52) & 0x7FF;

    printf("Exponent (Hexadecimal): 0x%X\n", hexExponent);
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned int bit = (binaryExponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;

    printExponent(x);

    return 0;
}
