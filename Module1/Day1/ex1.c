#include <stdio.h>

int biggest_number(int no1, int no2)
{
    if (no1>no2)
        return no1;
    else
        return no2;
}

int biggest_number_ternary(int no1, int no2)
{
    return (no1>no2) ? no1 : no2;
}

int main()
{
    int no1, no2;
    printf("Enter the first number: ");
    scanf("%d",  no1);
    printf("Enter the second number: ");
    scanf("%d", &no2);
    printf("Using if-else: The biggest number is %d\n", biggest_number(no1, no2));
    printf("Using ternary operator: The biggest number is %d\n", biggest_number_ternary(no1, no2));
    
    return 0;
}