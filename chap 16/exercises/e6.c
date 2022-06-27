#include <stdio.h>

struct time{
    int seconds, minutes, hours;
};

struct time split_time(long total_seconds);


int main(void) {
    struct time t1;

    t1 = split_time(10799);

    printf("hours = %d\nminutes = %d\nseconds = %d", t1.hours, t1.minutes, t1.seconds);

}

struct time split_time(long total_seconds) {
    struct time p;

    p.hours = (total_seconds / 3600);
    p.minutes = (total_seconds - p.hours * 3600) / 60; 
    p.seconds = (total_seconds - p.hours * 3600 - p.minutes * 60);

    return p;
}