#include<stdio.h>

int main(){
    int digit10, digit1;
    printf("Enter two digit number ");
    scanf("%1d%1d", &digit10, &digit1);
    if (digit10 != 1) {
    switch(digit10) {
        case 9: printf("Ninety-");
        break;
        case 8: printf("Eighty-");
        break;
        case 7: printf("Seventy-");
        break;
        case 6: printf("Sixty-");
        break;
        case 5: printf("Fifty-");
        break;
        case 4: printf("Forty-");
        break; 
        case 3: printf("Thirty-");
        break;
        case 2: printf("Twenty-");
        break;
    }
    switch(digit1) {
        case 9: printf("Nine");
        break;
        case 8: printf("Eight");
        break;
        case 7: printf("Seven");
        break;
        case 6: printf("Six");
        break;
        case 5: printf("Five");
        break;
        case 4: printf("Four");
        break; 
        case 3: printf("Three");
        break;
        case 2: printf("Two");
        break;
        case 1: printf("One");
    }
    }
    if (digit10 == 1) 
        switch (digit1) {
            case 9: printf("Nineteen");
            break;
            case 8: printf("Eighteen");
            break;
            case 7: printf("Seventeen");
            break;
            case 6: printf("Sixteen");
            break;
            case 5: printf("Fifteen");
            break;
            case 4: printf("Fourteen");
            break; 
            case 3: printf("Thirteen");
            break;
            case 2: printf("Twelve");
            break;
            case 1: printf("Eleven");
            break;
            case 0: printf("Ten");
            break;
        }

}