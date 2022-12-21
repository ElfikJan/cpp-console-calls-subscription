#ifndef PHONE_TALK_H
#define PHONE_TALK_H

#include "constants.h"

struct date
{
    int day;
    int month;
    int year;
};

struct Time
{
    int hour1;
    int minute1;
    int second1;
};
struct Duration
{
    int hour2;
    int minute2;
    int second2;
};

struct book_subscription
{
    int number; 
    date start;
    Time start;
    Duration sum;
    char rate[MAX_STRING_SIZE];
    double cost;
};

#endif
