#include <stdio.h>

const double E = .00001;

double absoluteValue (double x)
{
     if(x < 0)
        x = -x;
    
    return (x);
}

float sqroot (double x, const double E)
{
    //a guess
    double g = 1.0;

    while (absoluteValue(g * g - x) >= E)
        {
        g = (x / g + g) / 2.0;
        }
    
    return g;

}

float quadratic1 (float a, float b, float c)
{
    float x1;

    x1 = ((b * -1) + sqroot(((b * b) - (4 * a * c)), E)) / (2 * a);

    return x1;
}

float quadratic2 (float a, float b, float c)
{
    float x2;

    x2 = (   (b * -1) - sqroot(((b * b) - (4 * a * c)), E)    )       / (2 * a);

    return x2;
}

int main (void)
{
    int a;
    int b;
    int c;

    printf("Enter your variables a, b and c: ");
    scanf("%i %i %i", &a, &b, &c);

    if( ((b * b) - (4 * a * c)) < 0)
        printf("Roots are imaginary.\n");
    else
        printf("(x1 = %f, x2 = %f)\n", quadratic1(a, b, c), quadratic2(a, b, c));

    return 0;
}