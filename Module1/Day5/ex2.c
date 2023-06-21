#include <stdio.h>

struct Complex {
    double real;
    double imag;
};


void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%lf", &(num->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(num->imag));
}

void writeComplex(const struct Complex* num) {
    printf("Complex number: %.2f + %.2fi\n", num->real, num->imag);
}

struct Complex addComplex(const struct Complex* num1, const struct Complex* num2) {
    struct Complex result;
    result.real = num1->real + num2->real;
    result.imag = num1->imag + num2->imag;
    return result;
}

struct Complex multiplyComplex(const struct Complex* num1, const struct Complex* num2) {
    struct Complex result;
    result.real = (num1->real * num2->real) - (num1->imag * num2->imag);
    result.imag = (num1->real * num2->imag) + (num1->imag * num2->real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Reading Complex Number 1:\n");
    readComplex(&num1);

    printf("\nReading Complex Number 2:\n");
    readComplex(&num2);

    printf("\nComplex Numbers:\n");
    writeComplex(&num1);
    writeComplex(&num2);

    sum = addComplex(&num1, &num2);
    printf("\nSum of Complex Numbers:\n");
    writeComplex(&sum);

    product = multiplyComplex(&num1, &num2);
    printf("\nProduct of Complex Numbers:\n");
    writeComplex(&product);

    return 0;
}
