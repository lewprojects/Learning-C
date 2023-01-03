//using a function to say "Hello, world!"
//7.2 is the same thing, just repeated in the main routine
//7.3 usese a for loop to print it 5x

#include<stdio.h>

void printMessage(void)
{
    printf("Hello, world!\n");
}

int main(void)
{
    printMessage();

    return 0;
}