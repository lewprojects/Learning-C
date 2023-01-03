// “Write a program to generate and print a table of the first 10 factorials.”

#include <stdio.h>

int main(void)
{
    int n; 
    int factorial = 1;

    printf("  n       factorial\n");
    printf("------------------\n");

    for (n = 1; n <=10; n++)
    {
        factorial = n * factorial;   
        printf(" %2i          %i\n", n, factorial);
    }
    
    printf("\n");
    return 0;
}