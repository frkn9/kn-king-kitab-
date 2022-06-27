#include <stdio.h>

struct time {
    int departure, arrival;
};

struct time times[] = { {480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, 
{945, 1055}, {1140, 1280}, {1305, 1438} };


int main() {

    int hour, minute, distance_from_midnight;
    printf("Enter a 24-hour time: (hh:mm) ");
    scanf("%d:%d", &hour, &minute);
    distance_from_midnight = 60 * hour + minute;

    int i;
    int closest_departure;
    int closest_arrival;

    for(i = 0; i < 8; i++) {
        if(distance_from_midnight < times[i].departure) {
            closest_departure = times[i].departure;
            break;
        }
    }

    
                //12 am midnight 12 pm noon

    if(i == 8) {
        printf("Closes departure time is 8:00 am, arriving at 10:16 am\n");
        return 0;
    }

    closest_arrival = times[i].arrival;


    if( closest_departure >= 720) 
        if(closest_departure >= 780)
            printf("Closest departure time is %d:%.2d pm, ", closest_departure/60 - 12, closest_departure%60);
        else
             printf("Closest departure time is %d:%.2d pm, ", closest_departure/60, closest_departure%60);
        
    else 
        printf("Closest departure time is %d:%.2d am, ", closest_departure/60, closest_departure%60);
    

    if( closest_arrival >= 720)
        if(closest_arrival >= 780)
            printf("Closest arrival time is %d:%.2d pm\n", (closest_arrival/60) -12, closest_arrival%60);
        else
            printf("Closest arrival time is %d:%.2d pm\n", closest_arrival/60, closest_arrival%60);
    else
        printf("Closest arrival time is %d:%.2d am\n", closest_arrival/60, closest_arrival%60);


    return 0;
}
    