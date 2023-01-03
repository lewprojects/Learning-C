#include <stdio.h>
#include <math.h>

int main()
{

float a, b;

printf("Enter a value for A:");
scanf("%f", &a);
printf("Enter a value for B:");
scanf("%f", &b);
printf("%f x %f = %f\n", a, b, a*b);
printf("%f / %f = %f\n", a, b, a/b);
printf("%f^%f = %f\n", a, b, pow(a, b));
printf("The square root of %f is %f\n", a, sqrt(a));

    return(0);
}