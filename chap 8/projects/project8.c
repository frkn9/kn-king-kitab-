#include <stdio.h>

int main(void) {

    int a[5][5];
    int i, k, row_total = 0, column_total = 0, lowest, highest;
    for (k = 0; k < 5; k++) {
        printf("Enter student %d's grades: ", k + 1);
        for (i = 0; i < 5; i++) {
            scanf("%d", &a[k][i]);
        }
    }
    printf("\n");
    for (k = 0; k < 5; k++) {
        printf("Total score for student %d: ", k + 1);
        row_total = 0;
        for (i = 0; i < 5; i++) {
            row_total += a[k][i];
            if (i == 4)
                printf("%d\n", row_total);   
        }
    }
    printf("\n");
    for (k = 0; k < 5; k++) {
        printf("Average score for student %d: ", k + 1);
        row_total = 0;
        for (i = 0; i < 5; i++) {
            row_total += a[k][i];
            if (i == 4)
                printf("%.1f\n", (float) row_total / 5);   
        }
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Average score for quiz %d: ", i + 1);
        column_total = 0;
        for (k = 0; k < 5; k++) {
            column_total += a[k][i];
            if (k == 4)
                printf("%.1f\n", (float) column_total / 5);   
        }
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        lowest = a[0][i];
        for (k = 0; k < 5; k++) {         //k = row i = column
            if (a[k][i] < lowest)
                lowest = a[k][i];
        }
        printf("Lowest grade for quiz %d is: %d\n", i + 1, lowest);
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        highest = a[0][i];
        for (k = 0; k < 5; k++) {         //k = row i = column
            if (a[k][i] > highest)
                highest = a[k][i];
        }
        printf("Highest grade for quiz %d is: %d\n", i + 1, highest);
    }



    return 0;
}

