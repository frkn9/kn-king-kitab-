#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    int total_sec;

    int hr, min, sec;

    printf("Enter the total seconds since midnight:  ");

    scanf("%li", &total_sec);

    

    split_time(total_sec, &hr, &min, &sec);

    printf("%.2d:%.2d:%.2d", hr, min, sec);
    
}



void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec/3600;
    *min = total_sec / 60 - (*hr * 60) ;
    *sec = total_sec % 60 ;
}