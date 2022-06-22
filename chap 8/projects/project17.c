#include <stdio.h>

int main(void) {
    int size;
    int i;                  //1. ihtimal, wraparound 2. ihtimal gideceğin yer dolu
    int k;
    int m = 1;
    // doluysa row +1 column aynı
    printf("This program creates a magic square of a specific size.");
    printf("\nThe size must be an odd number between 1 and 99");
    printf("\nEnter size of magic square: ");                           //just werks
    scanf("%d", &size);
                                                                        // 0 2 ise 4 3 a atacak
    int a[size][size];                                                  // 2 4 ise 3 0 a atacak  

    for (i = 0, k = 0; k <= size - 1; ) {
        a[i][k] = 0; 
        if (i == size - 1) {
            k++;
            i = 0;
        }
        else 
            i++;
    }
                                                                    // 0 4 ise 4 0 a atacak 
    i = 0, k = size / 2;                                            // i = row k = column
    a[0][size / 2] = 1;  

    for (; m < (size * size) ;) {
        if ((i != 0) && (k != size - 1)) {                  //mesela 2 2
            if (a[i - 1][k + 1] == 0)                                                                    //i = 0 ve k -1 != size iken 
                a[--i][++k] = ++m;                                                                        
            else if (a[i - 1][k + 1] != 0)
                if (a[i + 1][k] == 0)
                a[++i][k] = ++m;
            else if (m == size * size) break;
                                                                       // row = size olacak column da +1
        }    
        
        
        if ((i == 0) && (k != (size - 1))) {                       // mesela 0 2
            if ( a[i = size - 1][k + 1] == 0) 
                a[i][++k] = ++m;
            else if (a[size - 1][k + 1] != 0)
                if (a[i + 1][k] == 0)
                a[++i][k] = ++m;
            else if (m == size * size)
                break;
        }         
      

        if ((i != 0) && (k == size - 1) ) {                         //mesela 2 4
            if (a[i - 1][0] == 0)
                a[--i][k = 0] = ++m;
            else if (a[i + 1][0] != 0)
                if (a[i + 1][k] == 0)
                a[++i][k] = ++m;
            else if (m == size * size)
                break;
        }
    

        if ((i == 0) && (k == size - 1)) {                             // 0 4 ise 4 0 a gider
            if (a[size - 1][0] == 0)
            a[i = size - 1][k = 0] = ++m;
            else if (a[size - 1][0] != 0)
                if (a[i + 1][k] == 0)
                a[++i][k] = ++m;
            else if (m == size * size)
                break;
        } 
                                              
    }


    for (i = 0; i < size; i++) {
        for (k = 0; k < size; k++) {
            printf("%4d", a[i][k]);
        }
        printf("\n");
    }
}                                               
    
        





