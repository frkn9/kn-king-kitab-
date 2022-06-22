#include <stdio.h>
#include <stdlib.h>


int* create_array(int n, int initial_value);

int main(void) {
    int* arr;

    arr = create_array(10, 5);

    printf("%d", arr[3]);

}

int* create_array(int n, int initial_value) {

    int* temp;

    temp = (int*) malloc(n * sizeof(temp)); 

    for(int i = 0; i < n; i++) 
        temp[i] = initial_value;
    
    return temp;
}