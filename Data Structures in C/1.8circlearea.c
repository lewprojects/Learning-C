#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    double area;
    system("clear");
    printf("\n Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf(" \n Area = %.21f\n\n", area);
    return 0;
}