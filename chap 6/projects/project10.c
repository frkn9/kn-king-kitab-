#include <stdio.h>

int main(){

    int d , m , y, bigd, bigm, bigy;

    for (bigd= -1, bigm= -1, bigy=-1;;) {
        printf("Enter a date: (dd/mm/yy): ");
        scanf("%2d/%2d/%2d", &d, &m, &y);
        if ( d == 0 && m == 0 && y == 0) 
            break;
        if (y > bigy) 
            bigy = y, bigm = m, bigd = d;
        else if (m > bigm)
            bigy = y, bigm = m, bigd = d;
        else if (d > bigd)
            bigd = y, bigm = m, bigd = d;
        
        
    }

        printf("Latest date is: %2.2d/%2.2d/%2.2d", bigd, bigm, bigy);


}