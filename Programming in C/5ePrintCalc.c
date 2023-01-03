/*Program to evaluate simple expressions of the form NUMBER OPERATOR NUMBER */
//5.9 is the same as 5.8, but using switch statements

#include <stdio.h>

int main (void)
{
    float value;
    float accumulator = 0;
    char operator;

    printf("Begin Calculations \n");

    while (operator != 'E')
    {
        scanf("%f %c", &value, &operator); 
                switch(operator)
                {
                case 'S':
                printf("= %.6f\n", accumulator = value);
                break;
            case '+':
                printf("= %.6f\n", accumulator = accumulator + value);
                break;
            case '-':
                printf("= %.6f\n", accumulator = accumulator - value);
                break;
            case '*':
            case 'x':
            case 'X':
                printf("= %.6f\n", accumulator = accumulator * value);
                break;
            case '/':
                if(value == 0)
                    {
                    printf("Undefined.\n");
                    scanf("%f %c", &value, &operator);
                    }
                else
                    {
                    printf("= %.6f\n", accumulator = accumulator / value);
                    }
                    break;
            case 'E':
                break;
            default:
                printf("Unknown operator.\n");
                break;
            }
        }
        printf("= %.6f\n", accumulator);
        printf("End of calculations\n");
        return 0;
}