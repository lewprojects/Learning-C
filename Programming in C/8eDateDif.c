#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int f (int year, int month)
{
    if (month <= 2)
        return year - 1;
    else
        return year;
}

int g (int month)
{
    if(month <= 2)
        return month + 13;
    else
        return month + 1;
}

int N (struct date x)
{
    return 1461 * f(x.year, x.month) / 4 + 153 * g(x.month) / 5 + x.day;
}

void whatDay (int N)
{
    int day;
    N -= 621049;
    day = N % 7;
    
    switch(day)
    {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    default:
        break;
    }
}

int main (void)
{
    struct date day1, day2;

    printf("Type 2 dates, with the most recent last (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d %2d/%2d/%4d", &day1.month, &day1.day, &day1.year, &day2.month, &day2.day, &day2.year);
    printf("Day 1 is a ");
    whatDay(N(day1));
    printf("Day 2 is a ");
    whatDay(N(day2));
    printf("The number of days between these two dates is %i\n", N(day2) - N(day1));

    return 0;
}


