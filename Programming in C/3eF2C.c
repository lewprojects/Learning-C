#include <stdio.h>

int main(void)
{
    float f = 27.0;
    float c = (f - 32) / 1.8;
    printf("%f degrees Farenheit is equal to %f degrees Celsius.\n", f, c);

    return 0;
}