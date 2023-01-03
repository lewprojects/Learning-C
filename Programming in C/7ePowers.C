#include <stdio.h>

int power(int n, int p)
{
    if (p == 0)
        return 1;

    const int base = n;

    for (int i = 1; i < p; i++)
    {
        n *= base;
    }

    return n;
}

int main (void)
{
    int n;
    int p;

    printf("What number do you want to raise to what power? ");
    scanf("%i %i", &n, &p);
    printf("%i to the power of %i is %i\n", n, p, power(n, p));
    return 0;
}