#include <stdio.h>

int main(void) {

    int a[5][5];
    int i, k, row_total = 0, column_total = 0;
    for (k = 0; k < 5; k++) {
        printf("Enter row %d: ", k + 1);
        for (i = 0; i < 5; i++) {
            scanf("%d", &a[k][i]);
        }
    }

    printf("Row totals: ");
    for (k = 0; k < 5; k++) {
        row_total = 0;
        for (i = 0; i < 5; i++) {
            row_total += a[k][i];
            if (i == 4)
                printf("%d ", row_total);   
        }
    }

    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++) {
        column_total = 0;
        for (k = 0; k < 5; k++) {
            column_total += a[k][i];
            if (k == 4)
                printf("%d ", column_total);   
        }
    }
    return 0;
}

