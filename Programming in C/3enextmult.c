#include <stdio.h>

int main(void)
{
    int i = 365;
    int j = 7;
    int Next_multiple = i + j - i % j;
    printf("The next multiple of 7 after 365 is %i\n", Next_multiple);

    i = 12258;
    j = 23;
    Next_multiple = i + j - i % j;
    printf("The next multiple of 23 after 12,258 is %i\n", Next_multiple);

    i = 996;
    j = 4;
    Next_multiple = i + j - i % j;
    printf("The next multiple of 4 after 996 is %i\n", Next_multiple);

    return 0;
}