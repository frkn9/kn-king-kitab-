#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

double compute_GPA(char grades[], int n) {
    double sum = 0;
    int i;
    
    for (i = 0; i < n; i++) {
        switch (toupper(grades[i]))
        {
        case 'A':
            sum += 4.0;
            break;
        case 'B':
            sum += 3.0;
            break;
        case 'C':
            sum += 2.0;
            break;
        case 'D':
            sum += 1.0;
            break;
        case 'F':
            sum += 0.0;
            break;
        default:
            break;
        }
    }

    return sum / n;
}

int main(void) {
    int i;
    char grades[MAX_SIZE] = {0};
    int lenght;

    printf("Enter grade lenght: ");
    scanf("%d", &lenght);
    printf("Enter grades: ");

    for (i = 0; i < lenght; i++) {
        scanf(" %c", &grades[i]);
    }
    printf("GPA is: %.2lf", compute_GPA(grades, lenght));

    return 0;
}