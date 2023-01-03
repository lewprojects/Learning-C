//Modified program to generate prime numbers

#include <stdio.h>
#include <stdbool.h>

int isPrime (int n)
{
    int p;
    int primeindex;
    
    if (n == 1 || n == 2 || n == 3)
        return 1;

    for(p = 1; p <= n; p++)
        {
            if(n % p == 0)
                primeindex++;
        }

    if (primeindex > 2)
        return 0;
    else
        return 1;
}

int main (void)
{
int n;

printf("Enter a positive integer: \n");
scanf("%i", &n);
if (isPrime(n) == 1)
    printf("This is a prime number.\n");
else
    printf("This is not a prime number\n.");
}