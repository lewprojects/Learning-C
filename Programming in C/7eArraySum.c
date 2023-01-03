#include <stdio.h>

int arraySum (int array[], int x)
{
    int sum = 0;

    for (int i = 0; i < x; i++)
        {
            sum += array[i];
        }
    
    return sum;
}

int main (void)
{
    int numberArray [5] = { 7, 2, 7, 2, 1};

    printf("The sum of the array is %i\n", arraySum(numberArray, 5));

    return 0;
}