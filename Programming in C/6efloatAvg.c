/*Program to calculate the average of a set of grades and count the number of failing test grades*/

#include <stdio.h>

int main (void)
{
    float numArray [10];
    float arrSum;
    float average;

    for(int i = 0; i < 10; ++i)
    {
        printf("Enter number: ");
        scanf("%f", &numArray[i]);

        arrSum += numArray[i];
    }
    average = arrSum / 10;

    printf("\nArray Average = %f\n", average);

    return 0;
}