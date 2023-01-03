//Newton-Raphson Method to Compute the Squre Root of x, but display error for negatives

#include <stdio.h>

//limit
const double E = .00001;

double absoluteValue (double x)
{
     if(x < 0)
        x = -x;
    
    return (x);
}

float newtonRaphson (double x, const double E)
{
    //a guess
    double g = 1.0;

    while (absoluteValue(g * g - x) >= E)
        {
        g = (x / g + g) / 2.0;
        }
    
    return g;

}

int main (void)
{
    printf("The square root of (2.0) = %f\n", newtonRaphson(2.0, E));

    printf("The square root of (144.0) = %f\n", newtonRaphson(144.0, E));

    printf("The square root of (17.5) = %f\n", newtonRaphson(17.5, E));
    
    // number to find the square root of
    double x;

    printf("Enter a positive integer: ");
    scanf("%lf", &x);

    if (x < 0)
    {
        printf("Negative square roots forbidden.\n");
        return 1;
    }

    printf("The square root of %f is %f\n", x, newtonRaphson(x, E));
    
    return 0;
}