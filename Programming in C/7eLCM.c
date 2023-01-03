#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while(v !=0) 
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int lcm (int u, int v)
{
    int x;
    
    x = (u * v) / (gcd(u, v));

    return x;
}

int main (void)
{
    int a;
    int b;

    printf("Enter two positive integers: ");
    scanf("%i %i", &a, &b);

    if(a <= 0 || b <= 0) 
        printf("The integers must be positive.\n");
    else
        printf("The least common multiple of %i and %i is %i\n", a, b, lcm(a, b));

    return 0;
}