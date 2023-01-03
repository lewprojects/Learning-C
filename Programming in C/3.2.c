//Illustrate the use of various arithmetic operators

#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    //subtraction
    result = a - b;
    printf("a - b = %i\n", result);

    //multiplication
    result = b * c;
    printf("b * c = %i\n", result);

    //division
    result = a / c;
    printf("a / c = %i\n", result);

    //precedence
    result = a + b * c;
    printf("a + b * c = %i\n", result);
    printf("a * b + c * d = %i\n", a * b + c * d);

    return 0;
}