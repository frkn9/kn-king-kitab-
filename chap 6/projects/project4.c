#include <stdio.h>

    // Calculates a broker's commission.

int main(void) {

    for (;;) {

    printf("\nEnter the value of trade(press 0 to exit):  ");
    float value, commission;
    scanf("%f", &value);
    if (value == 0.0f) {
        goto exit;
    }

    if ( value <= 2500 && 30 + (value * 1.7f / 100 ) < 39) { 
        commission = 39;
        printf("Commission is: $%.2f", commission);
    }
    else if (value <= 2500 ) {
        commission = 30 + (value * 1.7f / 100 );
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 2500 && value < 6250) {
        commission = 56 + (value * 0.66f / 100);
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 6250 && value < 20000) {
        commission = 76 + (value * 0.34f / 100);
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 20000 && value < 50000) 
    {
        commission = 100 + (value * 0.22f / 100);
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 50000 && value < 500000) {
        commission = 155 + (value * 0.11f / 100);
        printf("Commission is: $%.2f", commission);
    }
    else {
        commission = 255 + (value * 0.09f / 100);
        printf("Commission is: $%.2f", commission);
    }
    }
    exit: ;
    printf("The program has been terminated");

    return 0;
}
    






