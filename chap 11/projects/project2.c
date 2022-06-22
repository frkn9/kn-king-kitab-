#include <stdio.h>


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main() {

    int depart, arrival, desired;
    printf("Enter desired time: ");
    scanf("%d", &desired);

    find_closest_flight(desired, &depart, &arrival);
    
    printf("Departure time is %d minutes from 00:00 (of the past day)\nArrival time is %d minutes from 00:00 (of the past day)\n", depart, arrival);
}

void find_closest_flight(int distance_from_midnight, int *departure_time, int *arrival_time) {


    if (distance_from_midnight < 480 || distance_from_midnight > 1305){
        *departure_time = 480, *arrival_time = 616;
    }
    else if(distance_from_midnight < 583){
        *departure_time = 583, *arrival_time = 712;
    }
    else if(distance_from_midnight < 679){
        *departure_time = 679, *arrival_time = 811;
    }
    else if(distance_from_midnight < 767 ){
   
        *departure_time = 767, *arrival_time = 900;
    }
    else if(distance_from_midnight < 840){
        
        *departure_time = 840, *arrival_time = 968;
    }
    else if(distance_from_midnight < 945){
        
        *departure_time = 945, *arrival_time = 1075;
    }
    else if(distance_from_midnight < 1140){
        
        *departure_time = 1140, *arrival_time = 1280;
    }
    else if (distance_from_midnight < 1305){
        
        *departure_time = 1305, *arrival_time = 1438;
    }

}
    