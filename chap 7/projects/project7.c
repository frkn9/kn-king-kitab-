#include <stdio.h>

int main (void){
    float num1, denom1, num2, denom2, result_num, result_denom;
    char operand;
    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%f/%f %c %f/%f", &num1, &denom1, &operand, &num2, &denom2);

    switch (operand)
    {
    case '+':
        result_num = (num1 * denom2) + (num2 * denom1);
        result_denom = denom1 * denom2;
        break;
    case '-':
        result_num = (num1 * denom2) - (num2 * denom1);
        result_denom = denom1 * denom2;
        break;
    case '*':
        result_num = (num1 * num2);
        result_denom = denom1 * denom2;
        break;
    case '/':
        result_num = (num1 * denom2);
        result_denom = denom1 * num2;
        break;

    default:
        break;
    }
  
  /*  result_num = (num1 * denom2) + (num2 * denom1);
    result_denom = denom1 * denom2; */  
    printf("The sum is %.f/%.f\n", result_num, result_denom);
    printf("%c\n", operand);

    return 0;

}