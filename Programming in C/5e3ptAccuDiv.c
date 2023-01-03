//Program divides two integers to three-decimal-place accuracy

#include <stdio.h>

int main (void)
{
    float value1, value2;

    printf("Type in two numbers to divide with a space between them. \n");
    scanf("%f %f", &value1, &value2);

    if(value2 == 0)
        printf("Undefined.\n");
    else
        printf("%.3f\n", value1 / value2);

    return 0;
}