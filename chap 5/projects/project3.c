#include <stdio.h>

    // Calculates a broker's commission.

int main(void) {

    printf("Enter the number of shares ");
    float value, commission;
    scanf("%f", &value);

    if ( value <= 2500 && 30 + (value * 0.017f  ) < 39) { 
        commission = 39;
        printf("Commission is: $%.2f", commission);
    }
    else if (value <= 2500 ) {
        commission = 30 + (value * 0.017f );
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 2500 && value < 6250) {
        commission = 56 + (value * 0.0066f );
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 6250 && value < 20000) {
        commission = 76 + (value * 0.0034f);
        printf("Commission is: $%.2f", commission);
    }
    else if ( value >= 20000 && value < 50000) 
    {
        commission = 100 + (value * 0.0022f);
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

    if (value < 2000) 
        printf("\nCommission from rival broker is: $%.2f", 33 + 0.03f * value );
    else 
        printf("\nCommission from rival broker is: $%.2f", 33 + 0.03f * value ); 

    return 0;
}
    






