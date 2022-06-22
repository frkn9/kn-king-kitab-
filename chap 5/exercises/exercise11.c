#include <stdio.h>

int main() {
    
    int area_code;
    printf("ENTER AREA CODE: ");
    scanf("%d", &area_code);
    
    switch(area_code) {

        case 229: 
            printf("Albany");
            break;
        case 404: case 470: case 678: case 770:
            printf("Atlanta");
            break;
        case 478: 
            printf("Macon");
            break;
        case 762: case 706: 
            printf("Columbus");
            break;
        case 912: 
            printf("Savannah");
            break;
        default: 
            printf("State not recognized");
        }
}