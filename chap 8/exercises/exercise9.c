#include <stdio.h>

int main(void) {

    int temperature_readings[30][24];
    int i, k, sum = 0;

    for (i = 0, k= 0; i < 24; i++) {
        sum += temperature_readings[k][i];  
        if (i = 23) {
            i = -1, k++;
        }
        if (k >= 30)
            break;
    }

    return 0;
}
