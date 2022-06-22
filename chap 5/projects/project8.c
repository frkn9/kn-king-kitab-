#include <stdio.h>

int main() {

    int hour, minute, distance_from_midnight;
    printf("Enter a 24-hour time: (hh:mm) ");
    scanf("%d:%d", &hour, &minute);
    distance_from_midnight = 60 * hour + minute;

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
}
    