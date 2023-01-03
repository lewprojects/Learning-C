#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time time1, time2, time;

struct time calcSecs (struct time T1, struct time T2);
struct time calcMins (struct time T1, struct time T2);
struct time calcHours (struct time T1, struct time T2);
struct time elapsedTime (struct time T1, struct time T2);

int main (void)
{

    printf("Enter time 1 (hh:mm:ss): ");
        scanf("%2d:%2d:%2d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter time 2 (hh:mm:ss): ");
        scanf("%2d:%2d:%2d", &time2.hours, &time2.minutes, &time2.seconds);

    time = elapsedTime(time1, time2);

    printf("The time elapsed is %.2i:%.2i:%.2i.\n", time.hours, time.minutes, time.seconds);

    return 0;
}

struct time calcSecs (struct time T1, struct time T2)
{
    if (T2.seconds >= T1.seconds)
        T2.seconds -= T1.seconds;
    else
        T2.minutes--;
        T2.seconds += 60;
        T2.seconds -= T1.seconds;
    
    return T2;
}

struct time calcMins (struct time T1, struct time T2)
{
    if (T2.minutes >= T1.minutes)
        T2.minutes -= T1.minutes;
    else
        T2.hours--;
        T2.minutes += 60;
        T2.minutes -= T1.minutes;
    
    return T2;
}

struct time calcHours (struct time T1, struct time T2)
{
    if (T2.hours > T1.hours)
    {
        T2.hours -= T1.hours;
    }
    else
    {
        T2.hours += 24;
        T2.hours -= T1.hours;
    }
    return T2;
}

struct time elapsedTime (struct time T1, struct time T2)
{
    time = calcSecs(T1, T2);
    time = calcMins(T1, time);
    time = calcHours(T1, time);

    return time;
}
