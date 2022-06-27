#include <stdio.h>

struct date {
    int day, month, year;
};
int day_of_year(struct date d);

int compare_dates(struct date d1, struct date d2);

int main(void) {

    struct date d1 = {.day = 12, .month = 6}, d2 = {.day = 19, .month = 8};

    printf("%d", compare_dates(d1, d2));
    

}

int day_of_year(struct date d) {
    int day;
    day = d.day + 30*(d.month);

    return day;
}

int compare_dates(struct date d1, struct date d2) {
    int day1;
    day1 = d1.day + 30*(d1.month);

    int day2;
    day2 = d2.day + 30*(d2.month);

    if (day1 > day2) 
        return 1;
    else if (day1 < day2)
        return -1;
    else 
        return 0;
}