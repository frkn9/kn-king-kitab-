#include <stdio.h>
#include <stdbool.h>
#define N 8

int main() {
    
    int departure[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[N] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hour, minute, distance_from_midnight, departure_time, arrival_time;
    int i, j;

    printf("Enter a 24-hour time: (hh:mm) ");
    scanf("%d:%d", &hour, &minute);
    distance_from_midnight = 60 * hour + minute;

    for(i = 0; i < 8; i++) {
        if ((departure[i + 1] >= distance_from_midnight && distance_from_midnight >= departure[i]) == true) { 
            departure_time = departure[i + 1];
            arrival_time = arrival[i + 1];   
            break;
        }
        if ((distance_from_midnight <= 480 || distance_from_midnight > 1305) == true) {
            departure_time = departure[0];
            arrival_time = arrival[0];
            break;
        }
    }
    printf("Departure time: %.2d:%.2d", departure_time / 60, departure_time % 60);
    printf("\nArrival time: %.2d:%.2d", arrival_time / 60, arrival_time % 60);

    
    /*
    if (distance_from_midnight < 480 || distance_from_midnight > 1305){
        printf("Closes departure time is 8:00 am, arriving at 10:16 am");
    }
    else if(distance_from_midnight < 583){
        printf("Closes departure time is 9:43 am , arriving at 11:52 am");
    }
    else if(distance_from_midnight < 679){
        printf("Closes departure time is 11:19 am , arriving at 1:31 pm");
    }
    else if(distance_from_midnight < 767 ){
        printf("Closes departure time is 12:47 pm, arriving at 3:00 pm");
    }
    else if(distance_from_midnight < 840){
        printf("Closes departure time is 2:00 pm , arriving at 4:08 pm");
    }
    else if(distance_from_midnight < 945){
        printf("Closes departure time is 3:45 pm , arriving at 5:55 pm");
    }
    else if(distance_from_midnight < 1140){
        printf("Closes departure time is 7:00 pm , arriving at 9:20 pm");
    }
    else if (distance_from_midnight < 1305){
        printf("Closes departure time is 9:45 pm , arriving at 11:58 pm");
    }
    */
}
    