#include <stdio.h>

/*This program adds two integer values and displays the results*/

int main (void)
{
    printf ("Programing is fun.\n");
    printf ("And programming in C is even more fun.\n");
    printf ("Testing...\n..1\n...2\n....3\n");

    //Declare variables
    int value1, value2, sum;

    //Assgn values and calculated their sum
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    //Display the result
    printf ("The sum of %i and %i is %i\n", value1, value2, sum);

    return 0;
}