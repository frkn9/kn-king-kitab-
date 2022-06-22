#include <stdio.h>
    // checkbook balancing program
int main(){


    int command;
    float balance, credit, debit;
    printf("Commands: 0=clear, 1=credit, 2=debit,\n3=balance, 4=exit\n\n");

    for ( balance = 0.0f;;) {

        printf("Enter command: ");
        scanf("%d", &command);
        switch (command)
        {
        case 0: 
            balance = 0;
            break;
        case 1:
            printf("Enter amound of credit: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2: 
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance -=debit;
            break;
        case 3:
            printf("Current balance: %.2f\n", balance);
            break;
        case 4: 
            return 0;
        default:
            printf("Commands: 0=clear, 1=credit, 2=debit,\n3=balance, 4=exit\n\n");
            break;
        }
    }
}